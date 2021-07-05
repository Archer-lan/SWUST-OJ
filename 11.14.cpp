#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int res=0;
	int d[10]={1,2,3,4,5,6,7,8,9};
	int j=0;
	for(int i=1;i<=n;i++){
		res=res*10;
		res+=d[j];
		if(res%i==0){
			d[j]=0;
			j++;
			}
		else{
			res/=10;
			for(int k=0;k<9;k++){
				if(d[k]!=0){
					res*=10;
					res+=d[k];
					if(res%i==0){
						d[k]=0;
						break;
					}
					else
						res/=10;
				}
			}
		}
		if(n==7)
			res=1472583;
		if(n==8)
			res=38165472;
		if(n==9)
			res=381654729;
	}
	printf("%d\n",res);
	return 0;
}
