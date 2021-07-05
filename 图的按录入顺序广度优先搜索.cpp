#include<iostream>
#include<queue>
using namespace std;
int n;
int a[1000][1000];
queue<int> k;

void bfs(int f,char *s){
	k.push(f);
	while(!k.empty()){
		for(int i=0;i<n;i++)
			a[i][k.front()]=0;
		for(int i=0;i<n;i++){
			if(a[k.front()][i]){
				k.push(i);
				for(int p=0;p<n;p++)
					a[p][i]=0;
			}
		}
		cout<<s[k.front()];
		k.pop();
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
	for(int i=0;i<n;i++)
		if(c==s[i]){
			f=i;
			break;
		}
	bfs(f,s);
	return 0;
} 
