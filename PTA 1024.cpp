#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
	string s;
	string r;
	string a;
	string c;
	int b=0,f=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(i==0)
			r.append(s[i]);
		else{
			if(s[i]=='E'){
				f=i;
			}else{
				a.append(s[i]);
			}
			if(i>f&&f!=0)
				c.append(s[i]);
		}
	}
	for(int i=1;i<c.size();i++){
		b=b*10+(c[i]-'0');
	}
	for(int i=0;i<a.size();i++){
		if(r[i]=='-')
			cout<<"-";
		
	}
	return 0;
}
