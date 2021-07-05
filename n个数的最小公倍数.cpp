#include<stdio.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int a[n],sum=1,max;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		max=a[0];
		for(int i=0;i<n;i++){
			if(a[i]>max)
				max=a[i];
			sum*=a[i];
		}
		for(int i=max;i<sum;i++){
			int c=0;
			for(int j=0;j<n;j++){
				if(i%a[j]==0)
					c++;
			}
			if(c==n){
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}
