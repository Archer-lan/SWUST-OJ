#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	int n,k,a[10000]={0},m=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		a[k]=k;
	}
	for(int i=0;i<102;i++){
		if(a[i]!=0){
			int p=a[i];
			while(p!=1){
				if(p%2==0){
					p/=2;
					a[p]=0;
				}else{
					p=(3*p+1)/2;
					a[p]=0;
				}
			}
		}
	}
	for(int i=101;i>=0;i--){
		if(a[i]!=0){
			if(m==1){
				cout<<i;
				m++;
			}else{
				cout<<" "<<i;
			}
		}
	}
	return 0;
} 
