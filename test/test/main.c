#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "max.h" 
int main(int argc, char *argv[]) {
	double a,b;
	char c;
	scanf("%llf%c%llf",&a,&c,&b);
	if(c=='-')
		printf("%g\n",a-b);
	else if(c=='+')
		printf("%g\n",a+b);
	else if(c=='*')
		printf("%g\n",a*b);
	else if(c=='/')
		printf("%g\n",a/b);
	return 0;
}
