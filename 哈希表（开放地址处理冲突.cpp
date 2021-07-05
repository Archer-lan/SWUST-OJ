#include<iostream>
#include<cstring> 
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[105];
	memset(a,-1,sizeof(a));
	int m,t;
	cin>>m;
	int num=0;
	for(int i=0;i<m;i++){
		cin>>num;
		t=num%m;
		while(a[t]!=-1){
			t=(t+1)%n;
		}
		a[t]=num;
	}
	int count;
	int k;
	cin>>k;
	for(int i=0;i<n;i++)
	{
		if(a[t]==k)
		{
			cout<<t<<","<<count;
			return 0;
		}
		else 
		t=(t+1)%n;
	}
	cout<<"-1";
	return 0;
}
