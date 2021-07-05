#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a=0,b=0,c=0,d[100001];
	for(int i=1;i<=n;i++){
		a=0;
		for(int j=1;j<=sqrt(i);j++){
			if(i%j==0){
				a++;
				if(a>=2)
					break;
			}
		}
		if(a==1){
			d[b++]=i;
			if(b>2){
				if(d[b-1]-d[b-2]==2)
					c++;
			}
		}
	}
	cout<<c;
	return 0;
}
