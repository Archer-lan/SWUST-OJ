#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	int b[n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]) b[i]++;
		}
	}
	int max=b[0];
	for(int i=1;i<n;i++){
		if(max<b[i]) max=b[i];
	}
	cout<<max<<endl;
	for(int i=0;i<n;i++){
		if(max==b[i]) cout<<i;
	}
	return 0;
} 
