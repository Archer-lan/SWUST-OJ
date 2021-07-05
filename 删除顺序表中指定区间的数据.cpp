#include<stdio.h>
int main(){
	int n,a[100],b,c;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&b,&c);
	for(int i=0;i<n;i++){
		if(a[i]<b||a[i]>c)
			printf("%d ",a[i]);
	}
	return 0;
}
