#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int n,num,j=1,t=1,t1=0;
	cin>>n>>num;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		for(;j<n;){
			if((long long)a[i]*num>=a[j]){
				t+=1;
				j++;
			}else{
				j++;
				break;
			}
		}
		if(t1<t)
			t1=t; 
	}
	cout<<t1;
	return 0;
}
