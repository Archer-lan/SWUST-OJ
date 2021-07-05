#include<iostream>
#include<cmath> 
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
	int n,max;
	cin>>n;
	int a[10005];
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		a[m]++;
		if(a[m]>max){
			max=a[m];
		}
	}
	for(int i=0;i<10001;i++){
		if(a[i]==max){
			cout<<i;
			break;
		}
	} 
	return 0;
}
