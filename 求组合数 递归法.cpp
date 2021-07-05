#include<stdio.h>
#include<string.h>
int Factorial(int n,int r){
	int a[1000]={1},b[1000]={1};
	long long int sum=1;
	for(int i=1;i<=n;i++)
		a[i]=i;
	if(r>n-r){
		for(int i=1;i<=r;i++)
			b[i]=i;
		for(int i=1;i<=n;i++)
			sum*=a[i]/b[i];
		for(int i=1;i<=n-r;i++)
			sum=sum/i;
	}
	else{
		for(int i=1;i<=n-r;i++)
			b[i]=i;
		for(int i=1;i<=n;i++)
			sum*=a[i]/b[i];
		for(int i=1;i<=r;i++)
			sum=sum/i;
	}
	return sum;
}
int main(){
	int n,r;
	while(~scanf("%d %d",&n,&r)){
		long long int sum;
		if(n<r)
			printf("error!\n");
		else{
			sum=Factorial(n,r);
		}
		printf("%d\n",sum);
	}
	return 0;
}
