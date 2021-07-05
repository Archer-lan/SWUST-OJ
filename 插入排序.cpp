#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]<a[i-1]){
			int t=a[i];
			int j=i;
			for(;t<a[j-1];j--){
				a[j]=a[j-1];
			}
			a[j]=t;
			break;
		}
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
