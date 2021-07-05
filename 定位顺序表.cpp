#include<stdio.h>
int main(){
	int n; 
	scanf("%d",&n);
	int a[n],max=0,min=0,c,d;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	c=a[0];d=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>=c){
			c=a[i];
			max=i;
		}
	} 
	for(int i=0;i<n;i++){
		if(a[i]<=d){
			d=a[i];
			min=i;
		}
	}
	printf("Lmax=%d\nLmin=%d\n",max,min);
	return 0;
} 
