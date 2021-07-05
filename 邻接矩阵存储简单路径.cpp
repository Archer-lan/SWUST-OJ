#include<iostream>
using namespace std;
int n;
int a[100][100]={0};
int d[100][100]={0};
int f[100]={0};
int w[100],l=0;
void find(int c,int b);
void get(int p,int q);
int main(){
	cin>>n;
	int p,q;
	cin>>p>>q;
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
	get(p,q);
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
void get(int p,int q){
	f[p]=1;
	if(p==q){
		for(int j=0;j<l;j++){
				cout<<w[j];
		}
		l--;
		cout<<p<<endl;
		return ;
	}
	for(int i=0;i<n;i++){
		if(a[p][i]&&d[i][q]&&i!=p&&!f[i]){
			w[l++]=p;
			get(i,q);
			f[i]=0;
		}
	}
	l--;
}
