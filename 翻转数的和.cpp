#include<stdio.h>
#include<string.h>
int main(){
	int a,b;
	while(~scanf("%d%d",&a,&b)){
		int a1,a2=0,b1,b2=0,l1=0,l2=0;
		a1=a,b1=b;
		do{
			a1/=10;
			l1++;
		} while(a1!=0);
		do{
			b1/=10;
			l2++;
		} while(b1!=0);
		for(int i=0;i<l1;i++){
			a2+=a%10;
			if(i!=l1-1)
				a2*=10;
			a/=10;
		}
		for(int i=0;i<l2;i++){
			b2+=b%10;
			if(i!=l2-1)
				b2*=10;
			b/=10;
		}
		printf("%d\n",a2+b2);
	}
	return 0;
} 
