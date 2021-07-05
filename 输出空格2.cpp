#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	char tem;
	int t=0;
	for(;;){
		scanf("%c",&tem);
		if(tem=='\n')break;
		else s[t++]=tem;
	}
	printf("%s\n",s);
	return 0;
}
