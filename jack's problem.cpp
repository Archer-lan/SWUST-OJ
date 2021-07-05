#include<stdio.h>
#include<math.h>
int main(){
	int x1,y1,x2,y2,x3,y3;
	float p,sq;
	while(~scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3)){
		float a1,a2,a3;
		a1=sqrt((pow((x1-x2),2)+pow((y1-y2),2)));
		a2=sqrt((pow((x2-x3),2)+pow((y2-y3),2)));
		a3=sqrt((pow((x1-x3),2)+pow((y1-y3),2)));
		p=(a1+a2+a3)*0.5;
		sq=sqrt(p*(p-a1)*(p-a2)*(p-a3));
		printf("%.1f\n",sq);
	}
	return 0;
} 
