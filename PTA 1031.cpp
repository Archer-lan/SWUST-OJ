#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cmath> 
#include<cstring>
using namespace std;
int main(){
	int b[19]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	int a[12]={1,0,88,9,8,7,6,5,4,3,2};
	int n,sum=0,k=0,f=0;
	string s;
	string re[103];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		f=0;
		sum=0;
		for(int j=0;j<s.size()-1;j++){
			if((s[j]-'0')>9||(s[j]-'0')<0){
				re[k++]=s;
				f=1;
				break;
			}else{
				sum+=(s[j]-'0')*b[j];
			}
		}
		if(f!=1){
			if(sum%11==2){
				if(s[s.size()-1]!='X')
					re[k++]=s;
			}else{
				if((s[s.size()-1]-'0')!=a[sum%11]){
					re[k++]=s;
				}
			}
		}
	}
	if(k==0){
		cout<<"All passed";
	}
	else{
		for(int i=0;i<k;i++){
			cout<<re[i]<<endl;
		}
		cout<<re[k];
	}
	return 0;
}
