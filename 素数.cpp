#include<stdio.h>
int main(){
	int a,b,c;
	while(~scanf("%d%d",&a,&b)){
		if(a==1)
			a=2;
		c=b-a+1;
		for(int i=a;i>=a&&i<=b;i++){
			for(int j=2;j<i;j++){
				if(i%j==0){
					c-=1;
					break;
				}
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
