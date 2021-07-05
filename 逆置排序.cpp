#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char a[n+1];
	for(int i=0;i<=n;i++)
		scanf("%c",&a[i]);
	for(int i=n;i>0;i--){
		printf("%c",a[i]);
		if(a[i]=='A')
			break;
		printf(" "); 
	}
	printf("\n");
	return 0;
}
