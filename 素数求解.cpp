#include<stdio.h>
int main(){
	int m,n;
	while(~scanf("%d%d",&m,&n)){
		int c1=0;
		for(int i=m+1;;i++){
			int c2=0;
			for(int j=2;j<i;j++){
				if(i%j==0){
					c2++;
					break;
				}
			}
			if(c2==0){
				printf("%d ",i);
				c1++;
			}
			if(c1==n)
				break;
		}
	}
}
