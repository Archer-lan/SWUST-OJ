#include<stdio.h>
int a[1001];
int BinarySearch(int t,int l,int r){
	int temp=l+(r-l)/2;
	if(t==a[temp]) return a[temp];
	if(l>r) return -1;
	if(t>temp)
		return BinarySearch(t,temp+1,r);
	if(t<temp)
		return BinarySearch(t,l,temp-1);
}
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int res=BinarySearch(m,1,n);
	printf("%d",res);
	return 0;
}
