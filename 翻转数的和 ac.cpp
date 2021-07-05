#include<stdio.h>
#include<string.h>
int main(){
	int a1,a2;
	int a[10],b[10];
	while(~scanf("%d %d",&a1,&a2)){
		int b1=0,b2=0,c,d;
		for(int i=0;;i++){
			c=i;
			a[i]=a1%10;
			a1=a1/10;
			if(a1==0)
				break;
		}
		for(int i=0;;i++){
			d=i;
			b[i]=a2%10;
			a2=a2/10;
			if(a2==0)
				break;
		}
		for(int i=0;;i++){
			b1+=a[i];
			if(i==c)
				break;
			b1*=10;
		}
		for(int i=0;;i++){
			b2+=b[i];
			if(i==d)
				break;
			b2*=10;
		}
		printf("%d %d",b1,b2);
	}
	return 0;
}
