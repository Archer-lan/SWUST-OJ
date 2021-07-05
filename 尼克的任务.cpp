#include<iostream>
using namespace std;
int main(){
	int n,k,i,j;
	int d[10002]={0},a[10002]={0},b[10002]={0};
	while(cin>>n>>k){
		for(i=1;i<=k;i++)
			cin>>a[i]>>b[i];
		d[n+1]=0;
		j=k;
		for(i=n;i>=1;i--){
			d[i]=0;
			if(a[j]!=i)
				d[i]=d[i+1]+1;
			else{
				while(a[j]==i){
					if(d[i]<d[i+b[j]])
						d[i]=d[i+b[j]];
					j--;
				}
			}
		}
		cout<<d[1]<<endl;
	}
	return 0;
} 
