#include<stdio.h>
#include<string.h>
int main(){
	char a[50]; 
	while(~scanf("%s",a)){
		int l;
		l=strlen(a);
		for(int i=l-1;i>=0;i--)
			printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}
