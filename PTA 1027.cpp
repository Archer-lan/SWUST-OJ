#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
	int n,sum=0,f;
	char c;
	cin>>n>>c;
	for(int i=1;i<1000;i++){
		if((2*sum-1)>n){
			f=i-2;
			break;
		}
		sum+=2*i-1;
	}
	int space=0;
	for(int i=f;i>0;i--){
		for(int j=0;j<space;j++)
			cout<<" ";
		space++;
		for(int j=0;j<(2*i-1);j++){
			cout<<c;
		}
		cout<<endl;
	}
	space--;
	space--;
	for(int i=2;i<=f;i++){
		for(int j=0;j<space;j++){
			cout<<" ";
		}
		space--;
		for(int j=0;j<(2*i-1);j++)
			cout<<c;
		cout<<endl;
	}
	cout<<n-(2*(sum-(2*(f+1))+1)-1);
	return 0;
}
