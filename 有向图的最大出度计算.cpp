#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int p,q;
	int a[n]={0};
	for(int i=0;i<k;i++){
		cin>>p>>q;
		a[p]++;
	}
	int max=a[0];
	for(int i=1;i<n;i++){
		if(max<a[i]) max=a[i];
	}
	cout<<max<<endl;
	for(int i=0;i<n;i++){
		if(max==a[i]) cout<<i;
	}
	return 0;
}
