#include<stdio.h>
#include<string.h>
int main(){
	char a[81];
	while(~scanf("%s",a)){
		int l;
		l=strlen(a);
		for(int i=0;i<l;i++){
			if(a[i]>64&&a[i]<90)
				a[i]=a[i]+1;
			else if(a[i]>96&&a[i]<122)
				a[i]=a[i]+1;
			else if(a[i]==122||a[i]==90)
				a[i]=a[i]-25;
			else
				a[i]=a[i];
		}
		for(int i=0;i<l;i++)
			printf("%c",a[i]);
		printf("\n");
	}
	return 0;
} 
