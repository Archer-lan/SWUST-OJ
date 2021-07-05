 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 int cmp(const void*a,const void*b){
 	return (*(int*)b>*(int*)a);
 } 
 int main(){
 	int a[101],n,i;
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 		scanf("%d",&a[i]);
 	qsort(a,n,sizeof(int),cmp);
 	for(i=0;i<n;i++);{
 		printf("%d ",a[i]);
	}
 	return 0;
 }

