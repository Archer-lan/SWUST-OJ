#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int n,c,b,max=-1,k;
	cin>>n;
	int a[100009]={0};
	for(int i=0;i<n;i++){
		cin>>c>>b;
		a[c]+=b;
	}
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
			k=i;
		}
	}
	cout<<k<<" "<<max;
	return 0;
}
