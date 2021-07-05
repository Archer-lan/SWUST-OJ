#include<iostream>
using namespace std;
int n;
int a[100][100]={0};
int d[100][100]={0}; 
void find(int c,int b);
int main(){
	cin>>n;
	int p,q;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j])find(i,j);
		}
	}
	for(int i=0;i<n;i++){
		bool flag=true;
		for(int j=0;j<n;j++){
			if(!d[i][j]){
				flag=false;
				break;
			}
		}
		if(flag)cout<<i;
	}
	return 0;
} 
void find(int c,int b){
	if(d[c][b])return ;
	d[c][b]=1;
	if(c==b)return ;
	for(int i=0;i<n;i++){
		if(a[b][i]){
			find(c,i);
		}
	}
}
