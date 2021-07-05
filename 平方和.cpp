#include<stdio.h>
int Fud(int m){
	int sum=0;
	for(int i=1;i<=m;i++){
		sum+=i*i;
	}
	return sum;
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int res=0,sum=0;
		res=Fud(n);
		printf("%d\n",res);
	}
	return 0;
} 
