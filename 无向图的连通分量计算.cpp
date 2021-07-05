#include<iostream>
using namespace std;
int a[100][100]={0};
int n;
void find(int c,int b){
	a[c][b]=0;
	for(int i=0;i<n;i++){
		if(a[b][i]) find(b,i);
	}
}
int main(){
	cin>>n;
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]){
				ans++;
				find(i,j);
			}
		}
	}
	cout<<ans;
	return 0;
} 
