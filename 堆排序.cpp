#include<iostream>
using namespace std;
void duipai(int a[],int l,int r){
	int i=l,j=2*i;
	int t=a[i];
	while(j<=r){
		if(j<r&&a[j]>a[j+1]){
			j++;
		}
		if(t>a[j]){
			a[i]=a[j];
			i=j;
			j=2*i;
		}
	}
	a[i]=t;
}
int main(){
	int n;
	cin>>n;
	int a[10000];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=n/2;i>0;i--)
		duipai(a,i,n);
	for(int i=1;i<=n;i++)
		cout<<a[i]<<" "; 
	return 0;
} 
