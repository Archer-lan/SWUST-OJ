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
		int sum;
		sum=Factorial(n);
		printf("%d\n",sum);
	}
	return 0;
}
