#include<stdio.h>
#include<string.h>
int main(){
	char c[1000],b[20];
	gets(c);
	int l,j=0;
	l=strlen(c);
	for(int i=l-1;i>=-1;i--){
		if(c[i]==' '){
			for(int k=j-1;k>=0;k--){
				printf("%c",b[k]);
			}
			printf(" ");
			j=0;
		}
		else if(i==-1){
			for(int k=j-1;k>=0;k--){
				printf("%c",b[k]);
			}
		}
		else{
			b[j++]=c[i];
		}
	}
	return 0;
}
