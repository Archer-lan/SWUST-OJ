#include<iostream>
#include<cstring>
using namespace std;
int a[1000][1000];

int main(){
	memset(a,0,sizeof(a));
	int n,m,count=0;
	while(cin>>n>>m){
		char c;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>c;
				if(c=='*') a[i][j]=-1;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i-1][j]==-1) count++;
				if(a[i][j-1]==-1) count++;
				if(a[i+1][j]==-1) count++;
				if(a[i][j+1]==-1) count++;
				if(a[i-1][j-1]==-1) count++;
				if(a[i-1][j+1]==-1) count++;
				if(a[i+1][j-1]==-1) count++;
				if(a[i+1][j+1]==-1) count++;
				if(a[i][j]!=-1) a[i][j]=count;
				count=0;
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(a[i][j]==-1) cout<<"*";
				else cout<<a[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}
