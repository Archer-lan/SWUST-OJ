#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	int b[n]={0};
	int max=0,min=10000;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]>0){
				if(max<a[i][j])
					max=a[i][j];
				if(min>a[i][j])
					min=a[i][j];
			}
		}
	}
	cout<<max<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==max){
				cout<<"<"<<i<<" "<<j<<">";
			}
		}
	}
	cout<<endl<<min<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==min){
				cout<<"<"<<i<<" "<<j<<">";
			}
		}
	}
	return 0;
} 
