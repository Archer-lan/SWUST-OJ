#include<iostream>
#include<cstring> 
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int p,q;
	int a[1000];
	memset(a,0,sizeof(a));
	for(int i=0;i<k;i++){
		cin>>p>>q;
		a[p]++;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
