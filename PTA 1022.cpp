#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int a,f,i=0,b,c,m,r[40];
	cin>>a>>b>>m;
	c=a+b;
	f=c/m;
	while(f!=0){
		r[i++]=c%m;
		c=f;
		f=c/m;
	}
	r[i++]=c%m; 
	for(int j=i-1;j>=0;j--){
		cout<<r[j];
	}
	return 0;
} 
