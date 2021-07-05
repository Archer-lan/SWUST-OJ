#include<stdio.h>
#include<math.h> 
int main(){
	float x;
	scanf("%f",&x);
	float a=0,b=1;
	while(fabs(b-a)>0.00001){
		a=b;
		b=(a+x/a)*0.5;
	}
	printf("%.3f\n",b);
	return 0;
} 
