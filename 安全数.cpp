#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
	int n,min=99999,k=0,d[3],a,b;
	double c[10001][4];
	cin>>n>>a>>b;
	memset(d,0,sizeof(d));
	for(int i=0;i<n;i++){
		cin>>c[i][0]>>c[i][1];
		c[i][2]=sqrt((pow(c[i][0]-a,2)+pow(c[i][1]-b,2)));
	}
	for(int i=0;i<n;i++){
		if(c[i][2]<=min){
			min=c[i][2];
		}
	}
	cout<<d[2]<<endl<<d[1]<<endl<<d[0]<<endl;
	return 0;
}
