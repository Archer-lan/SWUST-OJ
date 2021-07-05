#include<iostream>
using namespace std;
int a[100][100];
char s[100];
int n;
int find(char x){
	for(int i=0;i<n;i++)
		if(x==s[i])return i;
}
int main(){
	cin>>n;
	int k,c;
	cin>>k>>s;
	char w,e;
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			if(i==j){
				a[i][j]=0;
			}
			else
				a[i][j]=a[j][i]=99999;
		}
	}
	for(int i=0;i<k;i++){
		cin>>w>>e>>c;
		a[find(w)][find(e)]=a[find(e)][find(w)]=c;
	}
	int low[100],clo[100];
	int min,i,j;
	for(i=0;i<n;i++){
		clo[i]=0;
		low[i]=a[clo[i]][i];
	}
	for(i=1;i<n;i++){
		min=99999;
		for(j=0;j<n;j++){
			if(min>low[j]&&low[j]){
				min=low[j];
				k=j;
			}
		}
		cout<<"("<<s[clo[k]]<<","<<s[k]<<")";
		low[k]=0;
		low[clo[k]]=0;
		for(j=0;j<n;j++){
			if(a[k][j]!=0 && a[k][j]<low[j]){
				clo[j]=k;
				low[j]=a[clo[j]][j];
			}
		}
	}
	return 0;
}
