#include<stdio.h>
#include<string.h>
int main(){
	char a[10];
	while(~scanf("%s",a)){
		int l;
		l=strlen(a);
		for(int i=0;i<l;i++){
			if(a[i]>96)
				a[i]=a[i]-32;
			else
				a[i]=a[i]+32;
		}
		printf("%s\n",a); 
	}
	return 0;
}
