#include<iostream>
#include<cstring> 
using namespace std;

int main(){
	int n;
	char c[103];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c;
		int l=strlen(c);
		int f=0;
		for(int j=0;j<l;j++){
			if(c[j]=='P'){
				if((c[j+1]=='A'&&c[j+2]=='T')||(c[j+2]=='A'&&c[j+3]=='T')){
					cout<<"YES"<<endl;
					f=1;
					break;
				}
			}
			if(c[j]!='A'&&c[j]!=' ')
				break;
		}
		if(f==0)
			cout<<"NO"<<endl;
	}
	return 0;	
}
