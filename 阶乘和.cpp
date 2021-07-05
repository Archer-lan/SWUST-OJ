#include<stdio.h>
int Factorial(int n){
	if(n==0)
		return 1;
	else
		return n*Factorial(n-1);
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		long long int sum=0;
		for(int i=1;i<=n;i++)
			sum+=Factorial(i);
		printf("%lld\n",sum);
	}
	return 0;
}
