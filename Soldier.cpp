#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int x[10001],y[10001],ans = 0;
		for(int i=0;i<n;i++)
			cin>>x[i]>>y[i];
		sort(x,x+n);
		sort(y,y+n);
		for(int i=0;i<n;i++)
			x[i]-=i;
		sort(x,x+n);
		int midx = x[n/2];
		int midy = y[n/2];
		for(int i=0;i<n;i++){
			ans+=abs(x[i]-midx);
			ans+=abs(y[i]-midy);
		}
		cout<<ans<<endl;
	}
	return 0;
}
