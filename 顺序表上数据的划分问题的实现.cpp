#include<stdio.h>

int main(){
	int n,a[100],b[100],m=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=1;i<n;i++){
		if(a[i]<a[0]){
			b[m]=a[i];
			m++;
			a[i]=-1;
		}
	}
	for(int i=m-1;i>=0;i--){
		printf("%d ",b[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i]!=-1)
			printf("%d ",a[i]);
	}
	return 0;
}
