#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm> 
using namespace std;
int main(){
	int n,a,b,c[1000][2],m;
	cin>>n>>a>>b;
	pair<int,int> d[1000];
	for(int i=0;i<n;i++){
		cin>>c[i][0]>>c[i][1];
		m=(pow(a-c[i][0],2)+pow(b-c[i][1],2)); 
		d[i]={m,i+1};
	}
	sort(d,d+n);
	for(int i=0;i<3;i++){
		cout<<d[i].second<<endl;
	}
	return 0;
} 
