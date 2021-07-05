#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
struct node{
	int win;
	int ping;
	int defalut;
}A,B;
int main(){
	int n;
	int AC=0,AB=0,AJ=0,BB=0,BC=0,BJ=0,max;
	cin>>n;
	char a,b;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a=='C'){
			if(b=='B'){
				A.defalut++;
				B.win++;
				BB++;
			}else if(b=='J'){
				B.defalut++;
				A.win++;
				AC++;
			}else if(b=='C'){
				B.ping++;
				A.ping++;
			}
		}
		else if(a=='B'){
			if(b=='J'){
				A.defalut++;
				B.win++;
				BJ++;
			}else if(b=='C'){
				B.defalut++;
				A.win++;
				AB++;
			}else if(b=='B'){
				B.ping++;
				A.ping++;
			}
		}else if(a=='J'){
			if(b=='C'){
				A.defalut++;
				B.win++;
				BC++;
			}else if(b=='B'){
				A.win++;
				B.defalut++;
				AJ++;
			}else if(b=='J'){
				A.ping++;
				B.ping++;
			}
		}
	}
	cout<<A.win<<" "<<A.ping<<" "<<A.defalut<<endl;
	cout<<B.win<<" "<<B.ping<<" "<<B.defalut<<endl;
	max=(AB>AC?AB:AC)>AJ?(AB>AC?AB:AC):AJ;
	if(max==AB) cout<<"B ";
	else if(max==AC) cout<<"C ";
	else if(max==AJ) cout<<"J ";
	max=(BB>BC?BB:BC)>BJ?(BB>BC?BB:BC):BJ;
	if(max==BB) cout<<"B";
	else if(max==BC) cout<<"C";
	else if(max==BJ) cout<<"J";
	return 0;
}
