#include<stdio.h>
int main(){
	int a,c,res;
	char b;
	while(~scanf("%d%c%d",&a,&b,&c)){
		if(b=='*')
			res=a*c;
		if(b=='-')
			res=a-c;
		if(b=='+')
			res=a+c;
		if(b=='/')
			res=a/c;
		printf("%d%c%d=%d\n",a,b,c,res);
	}
	return 0;
} 
