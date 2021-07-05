#include<stdio.h>
struct time{
	int hour;
	int minute;
};
time a;
time t[1000];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d:%d",&t[i].hour,&t[i].minute);
	}
	for(int i=0;i<n;i++){
		a.hour=13;a.minute=15;
		a.hour+=t[i].hour;
		a.minute+=t[i].minute;
		if(a.minute>60){
			a.hour=a.hour+1;
			a.minute=a.minute-60;
		}
		if(a.hour>24)
			a.hour=a.hour-24;
		printf("%d:%d\n",a.hour,a.minute);
	} 
	return 0;
}
