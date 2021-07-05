#include<bits/stdc++.h>
using namespace std;
int n;
struct node{
	long double x,y;
}a[500010];
double ans=10000000.0;
double dis(double a,double b,double c,double d){
	return sqrt(abs(c-a)*abs(c-a)+abs(d-b)*abs(d-b));
}
bool cmp(node a,node b){return (a.x==b.x)?(a.y<b.y):(a.x<b.x);}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i].x>>a[i].y;
	sort(a+1,a+n+1,cmp);
	for(int i=2;i<=n;i++)ans=min(ans,dis(a[i].x,a[i].y,a[i-1].x,a[i-1].y));
	for(int i=3;i<=n;i++)ans=min(ans,dis(a[i].x,a[i].y,a[i-2].x,a[i-2].y));
	for(int i=4;i<=n;i++)ans=min(ans,dis(a[i].x,a[i].y,a[i-3].x,a[i-3].y));
	printf("%.4lf",ans);
	return 0;
}
