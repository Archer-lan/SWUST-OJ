#include<stdio.h>
#include<math.h>
int main(){
	int a,b=0;
	scanf("%d",&a);
	for(int i=0;;i++){
		if(a==0)
			break;
		b+=(a%2)*pow(10,i);
		a=a/2;
	}
	printf("%d",b);
	return 0;
}
