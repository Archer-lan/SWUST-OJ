#include<stdio.h>
int main(){
	double x;
	int i=0;
	printf("������x��ֵ��"); 
	while(~scanf("%lf",&x)){
		if((x>-5||x==-5)&&x<0&&x!=-2)
			printf("f��x����ֵΪ��%lf\n",1/(x+2));
		else if((x>0||x==0)&&x<5)
			printf("f��x����ֵΪ��%lf\n",1/(x+5));
		else if((x>5||x==5)&&x<0)
			printf("f��x����ֵΪ��%lf\n",1/(x+12));
		else
			printf("f��x����ֵΪ��0\n");
			printf("������x��ֵ��"); 
		i++;
	}
	return 0;
} 
