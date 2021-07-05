#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main(){
	char s[1005];
	int a[11];
	memset(a,0,sizeof(a));
	int l;
	cin>>s;
	l=strlen(s);
	for(int i=0;i<l;i++){
		if((s[i]-'0')==0)
			a[0]++;
		else if((s[i]-'0')==1)
			a[1]++;
		else if((s[i]-'0')==2)
			a[2]++;
		else if((s[i]-'0')==3)
			a[3]++;
		else if((s[i]-'0')==4)
			a[4]++;
		else if((s[i]-'0')==5)
			a[5]++;
		else if((s[i]-'0')==6)
			a[6]++;
		else if((s[i]-'0')==7)
			a[7]++;
		else if((s[i]-'0')==8)
			a[8]++;
		else if((s[i]-'0')==9)
			a[9]++;
	}
	for(int i=0;i<10;i++){
		if(a[i]!=0)
			cout<<i<<":"<<a[i]<<endl;
	}
	return 0;
}
