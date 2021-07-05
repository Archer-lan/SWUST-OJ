#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int a[5],b[10000],c[10000],t=0,ans[10000],lb=0,lans=0;
	char z;
	for(int i=0;i<4;i++){
		cin>>z;
		a[i]=z-'0';
	}
	while(ans[lans-1]!=6174){
		sort(a,a+4,greater<int>());
		for(int i=0;i<4;i++){
			b[lb]=b[lb]*10+a[i];
		}
		sort(a,a+4,less<int>());
		for(int i=0;i<4;i++){
			c[lb]=c[lb]*10+a[i];
		}
		ans[lans]=b[lb]-c[lb];
		lb++;
		if(ans[lans]==0)
			break;
		t=ans[lans];
		for(int i=3;i>=0;i--){
			a[i]=t%10;
			t/=10;
		}
		lans++;
	}
	for(int i=0;i<lb;i++){
		if(b[i]>=1000)
			cout<<b[i];
		else if(b[i]>=100)
			cout<<"0"<<b[i];
		else if(b[i]>=10)
			cout<<"00"<<b[i];
		else if(b[i]>=0)
			cout<<"000"<<b[i];
		cout<<" - ";
		if(c[i]>=1000)
			cout<<c[i];
		else if(c[i]>=100)
			cout<<"0"<<c[i];
		else if(c[i]>=10)
			cout<<"00"<<c[i];
		else if(c[i]>=0)
			cout<<"000"<<c[i];
		cout<<" = ";
		if(ans[i]>=1000)
			cout<<ans[i]<<endl;
		else if(ans[i]>=100)
			cout<<"0"<<ans[i]<<endl;
		else if(ans[i]>=10)
			cout<<"00"<<ans[i]<<endl;
		else if(ans[i]>=0)
			cout<<"000"<<ans[i]<<endl;
	}
	return 0;
} 
