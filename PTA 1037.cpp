#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int money[4];
	int price[4];
	scanf("%d.%d.%d",&price[0],&price[1],&price[2]);
	scanf("%d.%d.%d",&money[0],&money[1],&money[2]);
	for(int i=2;i>=0;i--){
		if(i!=0){
			if(price[i]>money[i]&&i==2){
				money[i-1]=money[i-1]-1;
				money[i]=money[i]+29-price[i];
			}
			else if(price[i]>money[i]&&i==1){
				money[i-1]=money[i-1]-1;
				money[i]=money[i]+17-price[i];
			}else if(price[i]<money[i]){
				money[i]=money[i]-price[i];
			}
		}
		if(i==0) money[i]=money[i]-price[i];
	}
	cout<<money[0]<<"."<<money[1]<<"."<<money[2];
	return 0;
} 
