#include<stdio.h>
int main(){
	int n;
	char a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%c",&a[i]);
	for(int i=n-1;i>=0;i--){
		if(i==0)
			printf("%c\n",a[i]);
		else
			printf("%c ",a[i]);
	}
	return 0;
} 
