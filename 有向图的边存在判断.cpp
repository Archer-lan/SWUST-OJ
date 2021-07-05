#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int p,q;
	cin>>p>>q;
	int a[n][n];
	int b[n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]) b[i]++;
		}
	}
	if(a[p][q]||a[q][p]) cout<<"yes";
	else cout<<"no";
	return 0;
}
