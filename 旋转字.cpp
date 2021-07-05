#include<stdio.h>
#include<string.h>
int main(){
	char a[37],b[37];
	scanf("%s",a);
	int n,l,j=0;
	scanf("%d",&n);
	l=strlen(a);
	for(int i=l-n;i<l;i++){
		b[j]=a[i];
		j++;
	}
	for(int k=0;k<=l-1-n;k++){
		b[j]=a[k];
		j++;
	}
	for(int i=0;i<l;i++)
		printf("%c",b[i]);
	printf("\n");
	return 0;
} 
