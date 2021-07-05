#include<stdio.h>
int main(){
	int n,max=0;
	double x,y,a[700];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf%lf",&x,&y);
		if(x==0&&y==0)
			a[i]=1;
		else if(x==0&&y!=0)
			a[i]=y;
		else if(x!=0&&y==0)
			a[i]=x;
		else
			a[i]=x/y;
	}
	for(int i=0;i<n;i++){
		int c=0;
		for(int j=0;j<n;j++){
			if(a[i]==a[j])
				c++;
		}
		if(max<c)
			max=c;
	}
	printf("%d\n",max);
	return 0;
}
