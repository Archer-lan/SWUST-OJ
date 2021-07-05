#include<stdio.h>
int main(){
	int n,a[11],tmp;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
		break;
	}
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
} 
