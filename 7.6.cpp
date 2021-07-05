#include<stdio.h>
int move(int n,int u,int d){
	if(n<=0)
		return 0;
	else if(n-u<=0)
		return 1;
	else {
		return 2+move(n-u+d,u,d);
	}
}
int main(){
	int n,u,d;
	while(~scanf("%d%d%d",&n,&u,&d)){
		if(n==0&&u==0&&d==0)
			break;
		printf("%d\n",move(n,u,d));
	}
	return 0;
}
