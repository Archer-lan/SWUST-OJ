#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
		int min=0;
		if(n>=m){
			if(m==13) m=12;
			min=n/m;
			if(n%m!=0){
				if(n%m==13) min+=2;
				else min+=1;
			} 
			printf("%d\r",min);
		}
		else{
			if(n==13) printf("2\r");
			else if(n==0) printf("0\r");
			else printf("1\r");
	} 
	return 0;
} 
