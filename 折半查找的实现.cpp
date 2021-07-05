#include<iostream>
using namespace std;
int count;
int search(int a[],int m,int n){
	int l,r,mid,notf=-1;
	l=0;
	r=n-1;
	while(l<=r){
		count++;
		mid=(l+r)/2;
		if(a[mid]<m) l=mid+1;
		else if(a[mid]>m) r=mid-1;
		else return mid;
	}
	return notf;
}

int main(){
	int n,m,ans;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	ans=search(a,m,n);
	cout<<ans<<endl<<count;
	return 0;
} 
