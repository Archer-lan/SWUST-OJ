#include<stdio.h>
int main(){
	int m,n,t=0,res;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++)
		a[n]=0;
	for(int i=0;;i++){
		int count=0;
		t+=m;
		if(t>=n)
			t=t-n;
		if(t==0)
			a[0]=0;
		else
			a[t]=1;
		for(int j=1;j<n;j++){
			if(a[j]==0){
				count++;
				res=j;
			}
		}
		if(count==1)
			break;
	}
	printf("%d\n",res);
	return 0;
}
