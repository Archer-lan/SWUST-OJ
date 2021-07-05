#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=n/2;i<n;i++){
		int t=a[i];
		int j=i-n/2;
		while(j>=0&&t<a[j]){
			a[j+n/2]=a[j];
			j-=n/2;
		}
		a[j+n/2]=t;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
} 
