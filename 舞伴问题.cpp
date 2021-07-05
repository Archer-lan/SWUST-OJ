#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int m,n,t,j=0,k=0;
	char mname[20],wname[20];
	cin>>m;
	for(int i=0;i<m;i++)
		cin>>mname[i];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>wname[i];
	cin>>t;
	for(int i=0;i<t;i++){
		if(j>m-1)
			j=0;
		if(k>n-1)
			k=0;
		j++;k++;
	}
	cout<<mname[j-1]<<" "<<wname[k-1];
	return 0;
} 
