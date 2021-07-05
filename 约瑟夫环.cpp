#include<stdio.h>
#include<string.h>
int main(){
	int n,m,k=0,a[300003];
	scanf("%d%d",&n,&m);
	memset(a,0,sizeof(a));
	if(n%m!=0)
		for(int i=0;i<n-1;i++){
			a[k]=1;
			k=(k+m)%n;
			printf("%d ",k); 
		}
	else
		for(int i=0;i<n-1;i++){
			a[k]=1;
			k=(k+m)%(n+1);
		}
	printf("\n");
	for(int i=0;i<n;i++)
		if(a[i]==0)
			printf("%d ",i);
	return 0;
}
