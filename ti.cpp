#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int M,N,K;
	double EPS,TTB=50,TLB=200,TRB=50,TBB=50,TI,IT,MAX;
	double t[20][20],TT[20][20];
	scanf("%ld%ld",&N,&M);
	scanf("%lf%lf%lf",&K,&TI,&EPS);
	for(int i=0;i<N+1;i++){
		for(int j=0;j<M+1;j++)
			t[i][j]=TI;
	}
	for(int i=0;i<9;i++){
		t[i][1]=50;
	}
	for(int i=0;i<9;i++){
		t[i][7]=50;
	}
	for(int j=0;j<7;j++){
		t[9][j]=50;
	}
	for(int j=0;j<7;j++){
		t[1][j]=200;
	}
	for(int i=0;i<9;i++){
			for(int j=0;j<7;j++)
				printf("%lf ",t[i][j]);
		}
	/*for(IT=0;IT<K;IT++){
		for(int i=0;i<N+1;i++){
			for(int j=0;j<M+1;j++){
				TT[i][j]=t[i][j];
				t[i][j]=(t[i-1][j]+t[i+1][j]+t[i][j+1]+t[i][j-1])/4;
			}
		}
		for(int i=0;i<9;i++){
			for(int j=0;j<7;j++)
				printf("%lf ",t[i][j]);
		}
			MAX=TT[0][0]-t[0][0];
		for(int i=0;i<N+1;i++){
			for(int j=0;j<M+1;j++){
				if(MAX<TT[i][j]-t[i][j]){
					MAX=TT[i][j]-t[i][j];
				}
			}
		}
		if(MAX<EPS||MAX==EPS)
			break;
	}
	if(IT==K){
		printf("²»ÊÕÁ²£¡\n"); 
		printf("%lf\n",IT);
		for(int i=0;i<N+1;i++){
			for(int j=0;j<M+1;j++){
				printf("%lf ",t[i][j]);
			}
		}
	}
	else{
		printf("%lf\n",IT);
		for(int i=0;i<N+1;i++){
			for(int j=0;j<M+1;j++){
				printf("%lf ",t[i][j]);
			}
		}
	}*/
	return 0;
} 
