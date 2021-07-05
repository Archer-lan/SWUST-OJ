#include<stdio.h>
int main(){
	int a,b,x,c=0;
	scanf("%d",&a);
	b=a;
	do{
		c=c+1;
		a/=10;
	}while(a>0);
	printf("%d\n",c);
	printf("%d %d %d %d %d\n",12345/10000,(12345/1000)%10,(12345/100)%10,(12345/10)%10,12345%10);
	for(x=0;b;b/=10)
		x=x*10+b%10;
	printf("%d\n",x);
	return 0;
}
