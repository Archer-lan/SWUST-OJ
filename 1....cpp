#include<stdio.h>
int s(int n,int r){
	if(r>(n-r)){
		long long int sum1=1,sum2=1;
		for(int i=r+1;i<=n;i++)
			sum1=sum1*i;
		for(int i=1;i<=(n-r);i++)
			sum2=sum2*i;
		return sum1/sum2;
	}
	if(r<=(n-r)){
		long long int sum1=1,sum2=1;
		for(int i=n-r+1;i<=n;i++)
			sum1=sum1*i;
		for(int i=1;i<=r;i++)
			sum2=sum2*i;
		return sum1/sum2;
	}
}
int main(){
	int n,r;
	while(~scanf("%d%d",&n,&r)){
		long long int res;
		if(n==0&&r==0)
			break;
		if(n<r)
			printf("error!\n");
		else {
			res=s(n,r);
			printf("%lld\n",res);
		} 
	} 
	return 0;
}
