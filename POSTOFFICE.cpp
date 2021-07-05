#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int a[10000],b[10000];
int main(){
	int n,i;
	int sum=0;
	cin>>n;
	for (i=0;i<n;i++){
		cin >>a[i]>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for (i=0;i<n;i++){
	sum += abs(a[i]-a[n/2])+abs(b[i]-b[n/2]);
	}
	cout <<sum<<endl;
	return 0;
}
