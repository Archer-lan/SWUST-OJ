#include<iostream>
#include<cstdlib>
using namespace std;
int a[100],i=0;
int And(int n,int m){
	if(n==0) return 0;
	else{
		if(n%2==0){
			return And(n/2,2*m);
		}
		else{
			a[i++]=m;
			return And((n-1)/2,2*m)+m;
		}
	}
}

int main(){
	int n,m,ans;
	while(cin>>n>>m){
		i=0;
		ans=And(n,m);
		for(int j=0;j<i;j++){
			if(j!=i-1)
				cout<<a[j]<<" + ";
			else
				cout<<a[j]<<" = ";
		}
		cout<<ans<<endl;
	}
	return 0;
}
