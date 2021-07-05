#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(){
	int c[300]={0};
	string a,b;
	cin>>a>>b;
	transform(a.begin(),a.end(),a.begin(),::toupper);
	transform(b.begin(),b.end(),b.begin(),::toupper);
	for(int i=0;i<b.size();i++){
		c[b[i]]++;
	}
	for(int i=0;i<a.size();i++){
		if(c[a[i]]==0){
			c[a[i]]=1;
			if(isdigit(a[i]))
				cout<<a[i];
			else{
				cout<<a[i];
			}
		}
	}
	return 0;
}
