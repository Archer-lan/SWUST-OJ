#include<iostream>
#include<cstring> 
using namespace std;
int main(){
	int n;
	cin>>n;
	int t,flag[10001];
	memset(flag,0,sizeof(flag));
	for(int i=0;i<n;i++){
		cin>>t;
		flag[t]++;
	}
	int k=0;
	for(int i=0;i<10001;i++){
		if(flag[k]<flag[i]) k=i;
	}
	cout<<k;
	return 0;	
} 
