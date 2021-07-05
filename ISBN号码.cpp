#include<iostream>
#include<cmath> 
#include<cstdlib>
#include<stdio.h> 
#include<cstring>
using namespace std;
int main(){
	char a[11];
	int b[11];
	int k=0,sum=0;
	for(int i=0;i<13;i++){
		if(i==1||i==5||i==11)
			getchar();
		else{
			scanf("%c",&a[k]);
			if(a[k]=='X'){
				b[k]=10;
			}else{
				b[k]=a[k]-'0';
			}
			k++;
		}
	}
	for(int i=0;i<9;i++){
		sum+=b[i]*(i+1);
	}

	if(sum%11==b[9]){
		cout<<"Right";
	}else{
		cout<<b[0]<<"-"<<b[1]<<b[2]<<b[3]<<"-";
		cout<<b[4]<<b[5]<<b[6]<<b[7]<<b[8]<<"-";
		if(sum%11==10){
			cout<<"X";
		}else{
			cout<<sum%11;
		}
	}
	return 0;
}
