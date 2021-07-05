#include<bits/stdc++.h>
using namespace std;
const int inf=0x3f3f3f3f;
struct point {
	int x, y;
} p[1010];
double dis(point a,point b){
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int cmpx(point a,point b){
	return a.x<b.x;
}
int cmpy(int a,int b){
	return p[a].y<p[b].y;
}
double mindis(int l,int r){
	double d=inf;
	if(l==r)	return d;
	if(r-l==1)	return dis(p[l],p[r]);
	int mid=(l+r)/2;
	d=min(mindis(l,mid),mindis(mid+1,r));
	int pp[1010],k=0;
	for(int i=l;i<=r;i++){
		if(abs(p[i].x-p[mid].x<d))pp[k++]=i;
	}
	sort(pp,pp+k,cmpy);
	for(int i=0;i<k;i++){
		for(int j=i+1;j<k&&p[pp[j]].y-p[pp[i]].y<d;j++){
			d=min(d,dis(p[pp[i]],p[pp[j]]));
		}
	}
	return d;
}
int main() {
	int t,n;
	cin>>t;
	while(t--) {
		cin>>n;
		for(int i=0; i<n; i++) 	cin>>p[i].x>>p[i].y;
		sort(p,p+n,cmpx);
		cout<<fixed<<setprecision(4)<<mindis(0,n-1)<<endl;
	}
	return 0;
}
