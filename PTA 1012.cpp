#include<stdio.h>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int n,i1=0,i2=0,i3=0,i4=0,i5=0,k;
	cin>>k;
	int a1[1001],a2[1001],a3[1001],a4[1001],a5[1001];
	while(~scanf("%d",&n)){
		if(n%5==0){
			if(n%2==0){
				a1[i1++]=n;
			}
		}else if(n%5==1){
			a2[i2++]=n;
		}else if(n%5==2){
			a3[i3++]=n;
		}else if(n%5==3){
			a4[i4++]=n;
		}else if(n%5==4){
			a5[i5++]=n;
		}
	}
	int sum=0;
	float s=0;
	for(int i=0;i<i1;i++){
		sum+=a1[i];
	}
	if(sum==0)
		cout<<"N ";
	else
		cout<<sum<<" ";
	sum=0;
	for(int i=0;i<i2;i++){
		if(i%2==0){
			sum+=a2[i];
		}
		else
			sum-=a2[i];
	}
	if(i2==0){
		cout<<"N ";
	}else{
		cout<<sum<<" ";
	}
	if(i3==0){
		cout<<"N ";
	}else{
		cout<<i3<<" ";
	}
	for(int i=0;i<i4;i++){
		s+=a4[i];	
	}
	s=s/i4;
	if(i4==0)
		cout<<"N ";
	else
		printf("%.1f ",s);
	sum=0;
	for(int i=0;i<i5;i++){
		if(sum<a5[i])
			sum=a5[i];
	}
	if(i5==0)
		cout<<"N";
	else
		cout<<sum;
	return 0;
}
