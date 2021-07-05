#include<stdio.h>
#include<string.h>
int main(){
	char c[1000001];
	while(~scanf("%s",c)){
		int l,sum=0,t;
		l=strlen(c);
		for(int i=0;i<l;i++){
			t=c[i]-'0';
			sum+=t;
		}
		printf("%d %d\r\n",l,sum);
	}
	return 0;
}
