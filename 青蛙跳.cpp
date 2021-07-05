#include <stdio.h>
int num[500005],l,n;
int m;
void sort(int l,int r){
	if(l>=r)return ;
	int key=num[l];
	int x=l,y=r;
	while(x<y){
		while(x<y && num[y]>key){
			y--;
		}
	num[x]=num[y];
		while(x<y && num[x]<=key){
			x++;
	}
	num[y]=num[x];
	}
	num[x]=key;
	sort(x+1,r);
	sort(l,x-1);
}
int erfen(int l,int r){
	if(l>=r)return l;
	int d=(l+r)/2;
	int nowx=0,ans=0;
	for(int i=0;i<=n;i++){
		if((num[i]-nowx)>d){
			ans++;
			nowx=num[i-1];
		}
	}
	ans++;
	if(ans>m)return erfen(d+1,r);
	return erfen(l,d);
}
int num_find(int a,int l,int r){
	if(l>r)return -1;
	int d=(l+r)/2;
	if(num[d]==a)return d;
	if(num[d]>a){
		return num_find(a,l,d-1);
}
	else {
		return num_find(a,d+1,r);
}
}
int main()
{
	while(scanf("%d %d %d",&l,&n,&m)!=EOF){
		for(int i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		sort(0,n-1);
		num[n]=l;
		int minans=num[0];
		for(int i=0;i<n-1;i++){
			if((num[i+1]-num[i])>minans)minans=num[i+1]-num[i];
		}
		if((l-num[n-1])>minans)minans=l-num[n-1];
		printf("%d\n",erfen(minans,l));
	}
return 0;
} 
