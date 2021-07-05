#include<iostream>
#include<cstdlib>
using namespace std;
int J(int n){
	if(n==1) return 1;
	else if(n%2==0){
			n/=2;
			return 2*J(n)-1;
	}
	else{
		n=(n-1)/2;
		return 2*J(n)+1;
	}
}
int main(){
	int n,ans;
	cin>>n;
	ans=J(n);
	cout<<ans<<endl;
	return 0;
}
