#include<stdio.h>
int main(){
	int a[100],n,i,j,m;
	scanf("%d",&n);
	for(i=1;;i++){
		a[i]=n%10;
		n=n/10;
		if(n==0)
			break;
	}
	printf("%d\n",i);
	m=i;
	for(i;;i--){
		printf("%d",a[i]);
		if(i==1)
			break;
		printf(" ");
	}
	printf("\n");
	for(j=1;j<=m;j++){
		printf("%d",a[j]);}
	printf("\n");
	return 0;
} 
