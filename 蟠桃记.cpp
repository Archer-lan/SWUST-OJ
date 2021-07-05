#include<stdio.h>
int summary(int n){
	if(n==1)
		return 1;
	else{
		return (summary(n-1)+1)*2;
	}
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int sum;
		sum=summary(n);
		printf("%d\n",sum);
	}
	return 0;
}
