#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<n;i++)
		cin>>a[i];
	bool flag=true;
	for(int i=1;i<n/2;i++){
		if(a[2*i]<a[i]||a[2*i+1]<a[i]) flag=false;
	}
	flag?cout<<"Yes":cout<<"No";
	return 0;
} 
