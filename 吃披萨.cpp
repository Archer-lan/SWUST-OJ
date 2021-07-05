#include<stdio.h>
#include<math.h>
#define Pi 3.1415926
int main(){
	int r,a,b,c;
	float s1,s2,p; 
	while(~scanf("%d%d%d%d",&r,&a,&b,&c)){
	s1=r*r*Pi;
	p=(a+b+c)/2;
	s2=sqrt(p*(p-a)*(p-b)*(p-c));
	if(s2>s1)
		printf("B\n");
	else
		printf("A\n");
	}
	return 0;
}
