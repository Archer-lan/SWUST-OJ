#include<stdio.h>
int y(int year){
	int t1=0,t2=0,day;
	for(int i=1;i<year;i++){
		if((i%4==0&&i%100!=0)||i%400==0)
			t1++;
		else
			t2++;
	}
	day=t1*366+t2*365;
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
			case 2:if((year%4==0&&year%100!=0)||year%400==0)
						day+=29;
					else
						day+=28;
					break;
		} 
	}
	return day;
}
void c(int sum){
	int d;
	d=sum%7;
	switch(d){
		case 1:printf("Monday\n");return;
		case 2:printf("Tuesday\n");return;
		case 3:printf("Wednesday\n");return;
		case 4:printf("Thursday\n");return;
		case 5:printf("Friday\n");return;
		case 6:printf("Saturday\n");return;
		case 0:printf("Sunday\n");return;
	}
}
int main(){
	int year,month,day;
	while(~scanf("%d%d%d",&year,&month,&day)){
		int day1,day2,sum;
		day1=y(year);
		day2=m(month,year);
		sum=day1+day2+day;
		c(sum);
	}
	return 0;
}
