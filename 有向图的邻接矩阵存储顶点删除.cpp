#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	cout<<(n-1)<<endl;
	for(int i=0;i<n;i++){
		if(i!=k) cout<<i;
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		if(i!=k){
			for(int j=0;j<n;j++){
				if(j!=k)
					cout<<a[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
} 
