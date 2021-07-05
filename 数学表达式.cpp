#include<stdio.h>
int find(int a,int b){
	int i;
	for(i=a;i>=1;i--){
			if(a%i==0&&b%i==0)
				break;
			}
	return i;
}
int main(){
	int  a,b;
	while(~scanf("%d%d",&a,&b)){
		float res,c,d;int n,m,min,z;
		c=a;d=b;
		res=c/d;
		n=c/d;m=a%b;
		printf("%d / %d = %.2f\r\n",a,b,res);
		printf("%d / %d = %.0f%%\r\n",a,b,res*100);
		if(c>d&&m){
			printf("%.0f / %.0f = %d ( %d / %d )\r\n",c,d,n,m/find(m,b),b/find(m,b));
		}
		else
			printf("%.0f / %.0f = %d / %d\r\n",c,d,a/find(a,b),b/find(a,b));		
	}
	return 0;
}
