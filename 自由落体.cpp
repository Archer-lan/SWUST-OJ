#include<bits/stdc++.h>
int main(){
	int M,N;
	double h,m;
	scanf("%d%d",&M,&N);
	for(int i=0;i<N;i++){
		if(i==0){
			h=0.5*M;
			m=M;
		}
		else{
			h=0.5*h;
			m=m+pow(0.5,i)*2*M;
		}
	}
	printf("%.2f %.2f\n",h,m);
	return 0;
}
