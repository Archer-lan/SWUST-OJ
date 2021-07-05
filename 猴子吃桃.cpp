#include<stdio.h>
int main(){
	int N,sum;
	scanf("%d",&N);
	sum=1;
	for(int n=1;n<N;n++){
		sum=(sum+1)*2; 
	}
	printf("%d",sum);
	return 0;
} 
