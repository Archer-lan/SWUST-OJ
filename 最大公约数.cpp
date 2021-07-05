#include<stdio.h>
int x=0;
int gcd(int m,int n){
	printf("%d %d\n",m,n);
	if(n==0)
		return m;
	else{
		x++;
		
		return gcd(n,m%n);
	}
}
int main(){
	int m,n,re;
	scanf("%d%d",&m,&n);
	re=gcd(m,n);
	printf("%d\n%d",re,x);
	return 0;
}
