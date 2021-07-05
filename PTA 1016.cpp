#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
using namespace std;
int main(){
	int A,a,B,b,s1=0,s2=0;
	cin>>A>>a>>B>>b;
	while(A){
		int c=A%10;
		if(c==a){
			s1*=10;
			s1+=c;
		}
		A/=10;
	}
	while(B){
		int c=B%10;
		if(c==b){
			s2*=10;
			s2+=c;
		}
		B/=10;
	}
	cout<<s1+s2;
	return 0;
}
