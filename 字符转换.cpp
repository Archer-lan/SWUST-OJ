#include<stdio.h>
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		printf("%d %d\n",sizeof(int),sizeof(char));
		printf("%c %c\n",a,b);
	}
	return 0;
}
