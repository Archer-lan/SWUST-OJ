#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b){
	return (*(int*)a-*(int*)b);
}
int main(){
	int a[50001],n;
	int i; 
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n+1,sizeof(a[1]),cmp);
	for(i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
