#include<stdio.h>
void fouding(int p,int q){
	printf("%d %d\n",!p,!q); 
}
void hequ(int p,int q){
	printf("%d\n",p&q);
}
void xiqu(int p,int q){
	printf("%d\n",p||q);
}
void yunhan(int p,int q){
	if(p==1&&q==0)
		printf("0\n");
	else
		printf("1\n");
}
void dengzhi(int p,int q){
	printf("%d\n",p==q);
}	
int main(){	
	int p,q;
	while(1){	
		printf("请分别输入p q的真值，若p=2,q=2结束程序\n");
		scanf("%d %d",&p,&q);
		if(p==2&&q==2) break;
		if(p<0||p>1||q<0||q>1)
			printf("输入错误\n"); 
		else {	
			int r;
			printf("输入数字输出结果\n");
			printf("1：输出p和q的否定结果\n");									
			printf("2：输出p和q的合取结果\n");
			printf("3：输出p和q的析取结果\n");
			printf("4：输出p和q的蕴涵结果\n");
			printf("5：输出p和q的等值结果\n");
			printf("6：输出p和q的：否定 合取 析取 蕴涵 等值结果\n");
			scanf("%d",&r);
		    switch(r){
				case 1:	printf("p和q的否定结果为\n");
						fouding(p,q);break;
				case 2:printf("p与q的合取结果为\n");
						hequ(p,q);break;
				case 3:printf("p与q的析取结果为\n");
						xiqu(p,q);break;
				case 4: printf("p与q的蕴涵结果为\n");
						yunhan(p,q);break;
				case 5:printf("p与q的等值结果为\n");
						dengzhi(p,q);break; 
				case 6:printf("p和q的\n否定结果为\n");
						fouding(p,q);
						printf("合取结果为\n");
						hequ(p,q);
						printf("析取结果为\n");
						xiqu(p,q); 
						printf("蕴涵结果为\n");
						yunhan(p,q);
						printf("等值结果为\n");
						dengzhi(p,q);break; 				
			}
		}
		printf("请输入下一组真值\n");
	} 
	return 0;
}




