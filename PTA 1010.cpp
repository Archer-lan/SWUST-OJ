#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
struct node{
	int a=0;
	int n=0;
}x[10001],y;

int main(){
	int i=0,j=0,f=0;
	while(~scanf("%d %d",&y.a,&y.n)){
		i++;
		if(y.n==0||y.a==0){
			i--;
			continue;
		}
		x[i].a=y.a*y.n;
		x[i].n=y.n-1;
		if(i==0){
			cout<<"0 0";
			f=1;
			}
		else{
			f=1;
			if(i==1)
				cout<<x[i].a<<" "<<x[i].n;
			else
				cout<<" "<<x[i].a<<" "<<x[i].n;	
		}
	}
	if(f==0){
		if(i==0){
			cout<<"0 0";
			}
		else{
			if(i==1)
				cout<<x[i].a<<" "<<x[i].n;
			else
				cout<<" "<<x[i].a<<" "<<x[i].n;	
		}
	}
	return 0;
}
