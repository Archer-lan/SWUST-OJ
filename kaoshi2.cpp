#include<iostream>
#include<stdio.h>
using namespace std;

int Max(int a,int b){
	return a>b?a:b;
}

int main(){
	int n,m,ans;
	while(cin>>n>>m){
		int a[1001][1001];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=1;i<n;i++){
			if(a[i][0]==1)
				a[i][0]=a[i-1][0]+1;
			else
				a[i][0]=a[i-1][0];
		}
		for(int i=1;i<m;i++){
			if(a[0][i]==1)
				a[0][i]=a[0][i-1]+1;
			else
				a[0][i]=a[0][i-1];
		}
		for(int i=1;i<n;i++){
			for(int j=1;j<m;j++){
				if(a[i][j]){
					a[i][j] = Max(a[i-1][j],a[i][j-1]+1);
				}
				else{
					a[i][j] = Max(a[i-1][j],a[i][j-1]);
				}
			}
		}
		cout<<a[n-1][m-1]<<endl;
	}
	return 0;
}
