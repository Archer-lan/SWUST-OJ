#include<stdio.h>
#include<math.h>
int main(){
	int p,a,b,c;
	float B,r2; 
	while(~scanf("%d%d%d%d",&p,&a,&b,&c)){
	B=(c*c+b*b-a*a)/(2*b*c);
	B=sqrt(1-B*B);
	r2=(a/B)/2;
	if(r2>p)
		printf("B\n");
	else
		printf("A\n");
	}
	return 0;
}
