#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int a[n],sum=0;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<n;i++){
			if(i==0){
				sum+=a[i]*6;
				sum+=5;
			}
			else if((a[i]-a[i-1])>0){
				sum+=(a[i]-a[i-1])*6;
				sum+=5;
			}
			else if((a[i]-a[i-1])<0){
				sum+=(a[i-1]-a[i])*4;
				sum+=5;
			}
			else if((a[i]-a[i-1]==0))
				sum+=5;
		}
		printf("%d\n",sum);
	}
	return 0;
}
