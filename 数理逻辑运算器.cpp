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
		printf("��ֱ�����p q����ֵ����p=2,q=2��������\n");
		scanf("%d %d",&p,&q);
		if(p==2&&q==2) break;
		if(p<0||p>1||q<0||q>1)
			printf("�������\n"); 
		else {	
			int r;
			printf("��������������\n");
			printf("1�����p��q�ķ񶨽��\n");									
			printf("2�����p��q�ĺ�ȡ���\n");
			printf("3�����p��q����ȡ���\n");
			printf("4�����p��q���̺����\n");
			printf("5�����p��q�ĵ�ֵ���\n");
			printf("6�����p��q�ģ��� ��ȡ ��ȡ �̺� ��ֵ���\n");
			scanf("%d",&r);
		    switch(r){
				case 1:	printf("p��q�ķ񶨽��Ϊ\n");
						fouding(p,q);break;
				case 2:printf("p��q�ĺ�ȡ���Ϊ\n");
						hequ(p,q);break;
				case 3:printf("p��q����ȡ���Ϊ\n");
						xiqu(p,q);break;
				case 4: printf("p��q���̺����Ϊ\n");
						yunhan(p,q);break;
				case 5:printf("p��q�ĵ�ֵ���Ϊ\n");
						dengzhi(p,q);break; 
				case 6:printf("p��q��\n�񶨽��Ϊ\n");
						fouding(p,q);
						printf("��ȡ���Ϊ\n");
						hequ(p,q);
						printf("��ȡ���Ϊ\n");
						xiqu(p,q); 
						printf("�̺����Ϊ\n");
						yunhan(p,q);
						printf("��ֵ���Ϊ\n");
						dengzhi(p,q);break; 				
			}
		}
		printf("��������һ����ֵ\n");
	} 
	return 0;
}




