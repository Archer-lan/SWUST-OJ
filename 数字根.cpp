#include<stdio.h>
int main(){
	int a;
	while(~scanf("%d",&a)){
		if(a==0)
			break;
		int b,c,d;
		b=a/10;
		c=a%10;
		d=b+c;
		for(int i=0;;i++){
			if(d<10)
				break;
			else{ 
				b=d/10;
				c=d%10;
				d=b+c;} 
		}
		printf("%d\n",d);
	}
	return 0;
} 
