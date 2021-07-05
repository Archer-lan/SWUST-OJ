#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;
struct node{
	float store;
	float price;
	float avrprice;
}a[10001];

bool cmp(node a,node b){
	return a.avrprice>b.avrprice;
}

int main(){
	int n,d;
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>a[i].store;
	}
	for(int i=0;i<n;i++){
		cin>>a[i].price;
		a[i].avrprice=a[i].price/a[i].store;
	}
	sort(a,a+n,cmp);
	
	float sum;
	int xiaoliang=0;
	for(int i=0;i<n;i++){
		if(a[i].store+xiaoliang>=d){
			sum+=a[i].avrprice*(d-xiaoliang);
			break;
		}
		else{
			sum+=a[i].price;
			xiaoliang+=a[i].store;
		}
	}
	printf("%.2f",sum);
	return 0;
}
