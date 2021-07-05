#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<cmath>
#include<vector>
using namespace std;
vector<string> riqi={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(){
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	int s1,s2;
	s1=min(a.size(),b.size());
	s2=min(c.size(),d.size());
	char t1,t2;
	int t=1;
	for(int i=0;i!=s1;i++){
		if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='G')&&t==1){
			t1=a[i];
			t++;
		}
		if(a[i]==b[i]&&t==2&&(a[i]>='A'&&a[i]<='N'||isdigit(a[i]))){
			t2=a[i];
			break;
		}
	}
	int k;
	for(int i=0;i!=s2;i++){
		if(c[i]==d[i]&&isalpha(c[i])){
			k=i;
			break;
		}
	}
	cout<<riqi[t1-'A']<<" ";
	if(isupper(t2)) 
		printf("%02d:",t2-'A'+10);
	else
		printf("%02d:",t2-'0');
	printf("%02d",k);
	return 0;
}
