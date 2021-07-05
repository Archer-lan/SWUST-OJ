#include<stdio.h>
int main(){
	float cost;
	float p;
	while(~scanf("%f",&cost)){
		if(cost<1000&&cost>0)
			printf("discount=1,pay=%.0f\n",cost);
		if(cost>=1000&&cost<2000){
			p=cost*0.95;
			printf("discount=0.95,pay=%.1f\n",p);}
		if(cost>=2000&&cost<3000){
			p=cost*0.9;
			printf("discount=0.9,pay=%.0f\n",p);}
		if(cost>=3000&&cost<5000){
			p=cost*0.85;
			printf("discount=0.85,pay=%.0f\n",p);}
		if(cost>=5000){
			p=cost*0.8;
			printf("discount=0.8,pay=%.0f\n",p);}
	}
	return 0;
}
