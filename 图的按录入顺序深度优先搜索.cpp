#include<iostream>
using namespace std;
int n;
int a[1000][1000];
void dfs(int i,char *s){
	cout<<s[i];
	for(int j=0;j<n;j++)
		a[j][i]=0;
	for(int j=0;j<n;j++){
		if(a[i][j]){
			a[i][j]=a[j][i]=0;
			dfs(j,s);
		}
	}
}
int main(){
	cin>>n;
	char s[n+1],c;
	cin>>s;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	cin>>c;
	int f;
	for(int i=0;i<n;i++){
		if(c==s[i]){
			f=i;
			break;
		}
	}
	dfs(f,s);
	return 0;
}
