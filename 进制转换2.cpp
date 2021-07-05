#include<stdio.h>
#include<math.h>
int main(){
	int n;
	while(~scanf("%d",&n)){
		int res1=0,res2=0,a;a=n;
		for(int i=0;;i++){
			if(n%2!=0)
				res1+=pow(10,i);
			n=n/2;
			if(n==0)
				break;
			if(n==1){
				i=i+1;
				res1+=pow(10,i); 
				break;
			}
		}
		for(int i=0;;i++){
			if(a%8!=0)
				res2+=pow(10,i)*(a%8);
			a=a/8;
			if(a<8){
				res2+=pow(10,i+1)*a;
				break;
			}
		}
	printf("%d\n%d\n",res1,res2);
	}
	return 0;
}
