#include<stdio.h>
int main(){
	int n,sum;
	scanf("%d",&n);
	if(n<=100000){
		sum=n*0.1;
		printf("%d\n",sum);
		}
	if(n>100000&&n<=200000){
		sum=10000+(n-100000)*0.075;
		printf("%d\n",sum);
		}
	if(n>200000&&n<=400000){
		sum=17500+(n-200000)*0.05;
		printf("%d\n",sum);
		}
	if(n>400000&&n<=600000){
		sum=23500+(n-400000)*0.03;
		printf("%d\n",sum);
		}
	if(n>600000&&n<=1000000){
		sum=29500+(n-600000)*0.015;
		printf("%d\n",sum);
		}
	if(n>1000000){
		sum=35500+(n-1000000)*0.001;
		printf("%d\n",sum);
		}
	return 0;
} 
