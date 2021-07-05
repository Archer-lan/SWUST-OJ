#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;
int main(){
	int a[55],k,i=0,f,b[11]={0};
	for(int j=0;j<10;j++){
		cin>>k;
		b[j]=k;
	}
	for(int j=0;j<10;j++){
		for(int z=0;z<b[j];z++){
			a[i++]=j;
		}
	}
	for(int j=0;j<i;j++){
		if(a[j]!=0){
			cout<<a[j];
			f=j;
			break;
		}
	}
	for(int j=0;j<i;j++){
		if(f!=j)
			cout<<a[j];
	}
	return 0;
}
