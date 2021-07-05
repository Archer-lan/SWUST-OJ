#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
struct node{
	int num;
	int Dg;
	int Cg;
	int sum;
};
node a[100005],b[100005],c[100005],d[100005];
using namespace std;

bool com(node x,node y){
	if(x.sum<y.sum){
		return false;
	}else if(x.sum>y.sum){
		return true;
	}else{
		if(x.Dg<y.Dg){
			return false;
		}else if(x.Dg>y.Dg){
			return true;
		}else{
			if(x.num<y.num){
				return true;
			}else{
				return false;
			}
		}
	}
}
int main(){
	int n,deg=0,caid=0,ID,Dg,Cg;
	int l1=0,l2=0,l3=0,l4=0;
	cin>>n>>deg>>caid;
	for(int i=0;i<n;i++){
		cin>>ID>>Dg>>Cg;
		if(Dg>=deg&&Cg>=deg){
			if(Dg>=caid&&Cg>=caid){
				a[l1].num=ID;
				a[l1].Cg=Cg;
				a[l1].Dg=Dg;
				a[l1].sum=Cg+Dg;
				l1++;
			}
			else if(Dg>=caid&&Cg<=caid){
				b[l2].num=ID;
				b[l2].Dg=Dg;
				b[l2].Cg=Cg;
				b[l2].sum=Cg+Dg;
				l2++;
			}	
			else if(Dg>=Cg&&Dg<=caid&&Cg<=caid){
				c[l3].num=ID;
				c[l3].Cg=Cg;
				c[l3].Dg=Dg;
				c[l3].sum=Cg+Dg;
				l3++;
			}else{
				d[l4].num=ID;
				d[l4].Cg=Cg;
				d[l4].Dg=Dg;
				d[l4].sum=Cg+Dg;
				l4++;
			}
		}
	}
	cout<<l1+l2+l3+l4<<endl;
	sort(a,a+l1,com);
	sort(b,b+l2,com);
	sort(c,c+l3,com);
	sort(d,d+l4,com);
	for(int i=0;i<l1;i++){
		cout<<a[i].num<<" "<<a[i].Dg<<" "<<a[i].Cg<<endl;
	}
	for(int i=0;i<l2;i++){
		cout<<b[i].num<<" "<<b[i].Dg<<" "<<b[i].Cg<<endl;
	}
	for(int i=0;i<l3;i++){
		cout<<c[i].num<<" "<<c[i].Dg<<" "<<c[i].Cg<<endl;
	}
	for(int i=0;i<l4;i++){
		cout<<d[i].num<<" "<<d[i].Dg<<" "<<d[i].Cg<<endl;
	}
	return 0;
}
