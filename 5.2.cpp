#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
struct population{
	char contry[20];
	int last;
	int now;
	int com;
};
population pop[1000];
int e(const population &a,const population &b){
	return a.com>b.com;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>pop[i].contry;
	for(int i=0;i<n;i++)
		cin>>pop[i].last;
	for(int i=0;i<n;i++)
		cin>>pop[i].now;
	for(int i=0;i<n;i++){
		pop[i].com=pop[i].now-pop[i].last;
	}
	sort(pop+0,pop+n-1,e);
	for(int i=0;i<n;i++)
		cout<<pop[i].com<<" "<<pop[i].contry<<endl;
	return 0; 
}
