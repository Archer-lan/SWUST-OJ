#include<iostream>
#include<stdio.h>
#include<cstring>
#include<cstdlib>
using namespace std;
int main(){
	int n;
	cin>>n;
	getchar();
	int a[n][n];
	char s[n][2*n+1];
	memset(a,0,sizeof(a));
	for(int i=0;i<n;i++){
		scanf("%[^\n]s",s[i]);
		getchar();
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<strlen(s[i]);j++){
			int num=0;
			while(s[i][j]!=' '&&j<strlen(s[i])){
				num=num*10+s[i][j]-'0';
				j++;
			}
			a[i][num]=1;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]; 
		}
		cout<<endl;
	}
	return 0;
} 
