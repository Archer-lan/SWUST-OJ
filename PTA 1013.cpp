#include<iostream>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int m,n,k=0,f=0,c=0;
	cin>>m>>n;
	int a[10000];
	for(int i=1;i<=10001;i++){
		f=0;
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0){
				f++;
				if(f>1)
					break;
			}
		}
		if(f==1)
			a[k++]=i;
	}
	for(int i=m;i<=n;i++){
		if(c%10==9){
			if(i==n)
				cout<<a[i];
			else
				cout<<a[i]<<endl;
		}
		else{
			if(i==n)
				cout<<a[i];
			else
				cout<<a[i]<<" ";
		}
		c++;
	}
	return 0;
}
