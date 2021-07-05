#include<stdio.h>
double Sum(double n){
	double a,b;
	b=n;
	n=(int)n;
	a=b-n;
	return a;
}
int main(){
	double x,y;
	scanf("%lf",&x);
	y=Sum(x);
	printf("%llf",y);
	return 0;
}
