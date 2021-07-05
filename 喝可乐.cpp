#include<stdio.h>
int main(){
	int money,price;
	while(~scanf("%d%d",&money,&price)){
		int count=0,sum=0;
		count=money/price;
		sum+=count;
		do{
			sum+=count/3;
			count=count/3+count%3;
		}while(count>=3);
		printf("%d\n",sum);
	}
	return 0;
}
