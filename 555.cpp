#include<stdio.h>
#include<stdlib.h>
int cmp(const void*a,const void*b){
	return (*(int*)b-*(int*)a);
}
int main(){
	int n,m,a[n];
	int i; 
	scanf("%d%d",&n,&m);
	for(i=1;i<=5;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),cmp);
	for(i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
