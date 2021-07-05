#include<stdio.h>
int main(){
	int n;
	long long int sum=1;
	scanf("%d",&n); 
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	sum=sum%1000003;
	printf("%d",sum);
	return 0;
} 
