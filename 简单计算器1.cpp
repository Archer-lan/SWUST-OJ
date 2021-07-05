#include<stdio.h>
int main(){
	int n,m;
	char a;
	while(~scanf("%d%c%d",&n,&a,&m)){
		int ans=0;
		switch(a){
			case'+':ans=n+m;break;
			case'-':ans=n-m;break;
			case'*':ans=n*m;break;
			case'/':ans=n/m;break;
		}
		printf("%d%c%d=%d\n",n,a,m,ans);
	}
	return 0;
}
