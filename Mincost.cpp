#include<stdio.h>
int main(){
	int x;
	float cost=0;
	while(~scanf("%d",&x)){
		if(x==0)
			break;
		int n=x%8;
		if(x>4){
			if(x<=8)
				cost=10+(x-4)*2;
			if(x>8&&n<=4)
				cost=(x/8)*18+n*2.4;
			if(x>8&&n>4)
				cost=(x/8)*18+10+(n-4)*2;
		}
		else 
			cost=10;
		if(cost==(int)cost)
			printf("%g\n",cost);
		else
			printf("%.1f\n",cost);
	}
	return 0;
}
