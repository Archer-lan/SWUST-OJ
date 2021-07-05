#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;
struct people{
	string name;
	string data;
}a,maxp,minp;

int main(){
	int n,c=0;
	cin>>n;
	string up="2014/09/06",down="1814/09/06";
	maxp.data=up;
	minp.data=down;
	for(int i=0;i<n;i++){
		cin>>a.name>>a.data;
		if(a.data<=up&&a.data>=down){
			c++;
			if(a.data<maxp.data)
				maxp=a;
			if(a.data>minp.data)
				minp=a;
		}
	}
	if(c)
		cout<<c<<" "<<maxp.name<<" "<<minp.name;
	else cout<<"0";
	return 0;
}
