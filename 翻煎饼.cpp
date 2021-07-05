#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std; 
void change(int *a,int low,int high){
	for(int i=low,j=high;i<j;i++,j--){
		int temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
int main(){
	int a[1000],b[1000],n,ans,count;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b,b+n);
	count=n-1;
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=count;j++){
			if(a[j]==b[i]&&j!=count){
				if(j!=0){
					ans++;
					change(a,0,j);
				}
				ans++;
				change(a,0,count);
			}
		}
		count--;
	}
	cout<<ans<<endl;
	return 0;
} 
