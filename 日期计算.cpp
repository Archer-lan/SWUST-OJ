#include<stdio.h>
struct time{
	int year;
	int month;
	int day;
};
time t;
int main(){
	int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(~scanf("%d%d%d",&t.year,&t.month,&t.day)){
		int sum=0;
		if(t.month < 1 || t.month > 12 || t.day < 1 || t.day > days[t.month - 1])
			printf("Input error!\n");
		else{
			for(int i=1;i<t.month;i++){
				sum+=days[i-1];
			}
			if( (t.year%4 == 0 && t.year%100 != 0) || t.year%400 == 0)
				sum++;
			sum=sum+t.day;
			printf("%d\n",sum);
		}
	}
	return 0;
}
