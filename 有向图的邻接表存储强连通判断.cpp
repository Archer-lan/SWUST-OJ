#include<iostream>
using namespace std;
int n,k;
int a[100][100]={0};
int d[100][100]={0};

void find(int c,int b){
	if(d[c][b]) return ;
	d[c][b]=1;
	if(c==b) return ;
	for(int i=0;i<n;i++){
		if(a[b][i]) find(c,i);
	}
}

int main(){
	cin>>n>>k;
	int p,q;
	for(int i=0;i<k;i++){
		cin>>p>>q;
		a[p][q]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(a[i][j]) find(i,j);
	}
	for(int i=0;i<n;i++){
		if(!d[i][i]){
			cout<<"no";
			return 0;
		}
	}
	cout<<"yes";
	return 0;
}
