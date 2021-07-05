#include<stdio.h>
int main(){
	int n,m;
	int a[n],i;
	scanf("%d",&n);
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<2;i++){
		m=a[i];
		a[i]=a[n-i];
		a[n-i]=m;
	}
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
	return 0;
} 
