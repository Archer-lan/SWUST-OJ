#include<stdio.h>
int a[500005],L,n,m;
int ma(){
	int max;
	max=a[0];
	for(int i=0;i<n;i++){
		if((a[i+1]-a[i])>max)
			max=a[i+1]-a[i];
	}
	if((L-a[n-1])>max)
		max=L-a[n-1];
	return max;
}
void sort(int left,int right){
	int temp,i,j,t;
	if(left>right)
		return ;
	i=left;
	j=right;
	temp=a[left];
	while(i<j){
		while(i<j&&a[j]>=temp)
			j--;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		while(i<j&&a[i]<=temp)
			i++;
			t=a[i];
			a[i]=a[j];
			a[j]=t;
	}
	a[i]=temp;
	sort(left,i-1);
	sort(i+1,right);
	return ;
}
int test(int l,int r){
	if(l>=r) return l;
	int d=(r+l)/2;
	int nowx=0,ans=0;
	for(int i=0;i<=n;i++){
		if((a[i]-nowx)>d){
			ans++;
			nowx=a[i-1];
		}
	}
	ans++;
	if(ans>m)
		return test(d+1,r);
	return test(l,d);
}
int main(){
	while(~scanf("%d%d%d",&L,&n,&m)){
	int max;
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	sort(0,n-1);
	a[n]=L;
	max=ma();
	printf("%d\n",test(max,L));
	}
	return 0;
}
