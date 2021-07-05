#include<stdio.h>
int main(){
	int price,pay;
	while(~scanf("%d%d",&price,&pay)){
		int ten=0,five=0,one=0,remain;
		remain=pay-price;
		for(int i=0;i<remain/10;i++)
			ten++;
		remain=remain%10;
		for(int i=0;i<remain/5;i++)
			five++;
		remain=remain%5;
		for(int i=0;i<remain/1;i++)
			one++;
		printf("%d %d %d\n",ten,five,one);
	}
	return 0;
}
