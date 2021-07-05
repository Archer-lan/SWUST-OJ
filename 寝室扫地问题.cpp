#include<stdio.h>
int y(int year){
	int day;
	int c1=0,c2=0;
	for(int i=2007;i<year;i++){
		if((i%4==0&&i%100!=0)||(i%400==0))
			c1++;
		else
			c2++;
	}
	day=c1*366+c2*365;
	return day;
}
int m(int month,int year){
	int day=0;
	for(int i=1;i<month;i++){
		switch(i){
			case 1:day+=31;break;
			case 3:day+=31;break;
			case 4:day+=30;break;
			case 5:day+=31;break;
			case 6:day+=30;break;
			case 7:day+=31;break;
			case 8:day+=31;break;
			case 9:day+=30;break;
			case 10:day+=31;break;
			case 11:day+=30;break;
			case 12:day+=31;break;
			case 2:
				if((year%4==0&&year%100!=0)||(year%400==0)){
					day+=29;break;}
				else{
					day+=28;break;
				}
		}
	}
	return day;
}
void res(int day){
	int remain,monday,s;
	remain=(day-244)%7;
	monday=(day-244)/7;
	s=(day-244)-monday;
	if(remain>=2)
		s=s-1;
	if(remain==2)
		printf("ALL\n");
	else{
		if(s%4==0)
			printf("B\n");
		else if(s%4==1)
			printf("X\n");
		else if(s%4==2)
			printf("H\n");
		else if(s%4==3)
			printf("P\n");
	}
}
int main(){
	int year,month,day;
	while(~scanf("%d%d%d",&year,&month,&day)){
		int day1,day2,day3;
		day1=y(year);
		day2=m(month,year);
		day3=day1+day2+day;
		res(day3);
	}
	return 0;
}
