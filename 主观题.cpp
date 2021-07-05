#include<stdio.h>
int main(){
	int A,B,n1,n2;
	scanf("%d%d%d%d",&A,&n1,&B,&n2);
	int p1=0,p2=0;
	for(int i=0;;i++){
		if(A%10==n1){
			p1*=10;
			p1+=n1;
		}
		A=A/10;
		if(A==0)
			break;
	}
	for(int i=0;;i++){
		if(B%10==n2){
			p2*=10;
			p2+=n2;
		}
		B=B/10;
		if(B==0)
			break;
	}
	printf("%d\n",p1+p2);
	return 0;
}
