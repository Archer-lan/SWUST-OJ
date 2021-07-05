#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	float sum=0,nu=2,mo=1,t;
	for(int i=0;i<n;i++){
		sum+=nu/mo;
		t=nu;
		nu=nu+mo;
		mo=t;
	}
	printf("%.2f\n",sum);
	return 0;
} 
