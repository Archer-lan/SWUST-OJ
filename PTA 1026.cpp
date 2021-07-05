#include<iostream>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main(){
	int a,b,c=100,h;
	int r;
	cin>>a>>b;
	if((b-a)%100>=50){
		r=(b-a)/100+1;
	} else{
		r=(b-a)/100;
	}
	printf("%02d:",r/3600);
	r%=3600;
	printf("%02d:",r/60);
	r%=60;
	printf("%02d",r);
	return 0;
} 
