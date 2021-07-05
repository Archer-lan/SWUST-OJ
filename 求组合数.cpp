#include<stdio.h>
int ss(int n){
		int sum=1;
		for(int i=1;i<=n;i++)
			sum*=i;
		return sum;
}
int main(){
	int n,r;
	while(~scanf("%d%d",&n,&r)){
		int a,res;
		a=ss(n)/(ss(r)*ss(n-r));
		res=a*((n-r+1)/r);
		printf("%d\n",res);
	}
	return 0;
}
