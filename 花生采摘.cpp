#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
#include<stdio.h>
using namespace std;
typedef struct Map{
	int row;
	int col;
	int number;
}Node;
Node a[100];

bool cmp(Node a,Node b){
	return a.number>b.number;
}

int main(){
	int n,m,time,len=0;
	cin>>n>>m>>time;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int temp;
			cin>>temp;
			if(temp!=0){
				a[len].col=j;
				a[len].row=i;
				a[len].number=temp;
				len++;
			}
		}
	}
	sort(a,a+len,cmp);
	time=time-2;
	int Nrow=0,Ncol=0,ans=0;
	for(int i=0;i<len;i++){
		int need=0;
		if(i==0){
			need=a[i].row+1;
		}
		else{
			need=abs(a[i].row-Nrow)+abs(a[i].col-Ncol)+1;
		}
		if(time>=(need+a[i].row)){
			Nrow=a[i].row;
			Ncol=a[i].col;
			time-=need;
			ans+=a[i].number;
		}
		else{
			break;
		}
	}
	cout<<ans<<endl; 
	return 0;
}
