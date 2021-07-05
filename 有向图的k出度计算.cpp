#include<iostream>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n][n];
	int b[n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]) b[i]++;
		}
	}
	int num=0;
	for(int i=0;i<n;i++){
		if(k==b[i]) num++;
	}
	cout<<num<<endl;
	for(int i=0;i<n;i++){
		if(k==b[i]) cout<<i;
	}
	return 0;
} 
