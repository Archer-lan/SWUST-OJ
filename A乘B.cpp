#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char l1[50001],l2[50001];
	int a[50001],b[50001],c[50001];
	cin>>l1>>l2;
	a[0]=strlen(l1);b[0]=strlen(l2);
	for(int i=1;i<=a[0];i++)
		a[i]=l1[a[0]-i]-'0';
	for(int i=1;i<=b[0];i++)
		b[i]=l2[b[0]-i]-'0';
	for(int i=1;i<=a[0];i++)
		for(int j=1;j<=b[0];j++)
			c[i+j-1]+=a[i]*b[j];
	int len=a[0]+b[0];
	for(int i=1;i<len;i++)
		if(c[i]>9){
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}
	while(c[len]==0&&len>1){
		len--;
	}
	for(int i=len;i>=1;i--)
		cout<<c[i];
	return 0;
}
