#include<stdio.h>
#include<math.h> 
int main(){
	int a1,b1,c1,a2,b2,c2,a3,b3,c3;
	while(~scanf("%d%d%d%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3)){
		int l1,l2,l3,l4,l5,l6;
		l1=pow(a1-a2,2)+pow(b1-b2,2)+pow(c1-c2,2);
		l2=pow(a2-a3,2)+pow(b2-b3,2)+pow(c2-c3,2);
		l3=pow(a1-a3,2)+pow(b1-b3,2)+pow(c1-c3,2);
		if(l1>l2&&l1>l3) {
			l4=l1;l5=l2;l6=l3;
		}
		else if(l2>l1&&l2>l3) {
			l4=l2;l5=l1;l6=l3;
		}
		else if(l3>l2&&l3>l2) {
			l4=l3;l5=l1;l6=l2;
		}
		if(l4==l5+l6)
			printf("Middle\n");
		else if(l4<l5+l6)
			printf("Small\n");
		else if(sqrt(l4)<sqrt(l5)+sqrt(l6))
			printf("Big\n");
		else
			printf("None\n");
	}
	return 0;
} 
