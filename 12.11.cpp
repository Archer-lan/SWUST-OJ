#include<stdio.h>
#include<string.h>
int main(){
	char c[100];
	int x;
	scanf("%s%d",c,&x);
	c[0]+=1;
	printf("%s",c);
	return 0;
}
