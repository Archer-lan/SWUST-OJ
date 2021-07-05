#include<bits/stdc++.h>
int main(){
	int hour;
	float price,income;
	while(~scanf("%d%f",&hour,&price)){
			if(hour>=0&&hour<=40){
				income=hour*price;
				printf("%.0f\n",income);
			}
			if(hour>40&&hour<60){
				income=40*price+(hour-40)*1.5*price;
				printf("%.2f\n",income);
			}
			if(hour>=60&&hour<=168){
				income=40*price+20*1.5*price+(hour-60)*3*price;
				printf("%.0f\n",income);
			}
			else if(hour<0||hour>168)
				printf("input is wrong!\n");
		}
	return 0;
}
