#include<stdio.h>
void sort(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void bingji(int a[],int b[],int n,int n2)
{
	int c[n+n2];
	int len=0;
	for(int i=0;i<n;i++){
		c[len++]=a[i];
	}
	for(int j=0;j<n2;j++){
		int flag=0;
		for(int k=0;k<len;k++){
			if(b[j]==c[k]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			c[len++]=b[j];
		}
	}
	sort(c,len);
	for(int i=0;i<len;i++){
		printf("%d ",c[i]);
	}
	printf("\n");
} 
void jiaoji(int a[],int b[],int n,int n2)
{
	int dex=0;
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<n2;j++){
			if(a[i]==b[j]){
				flag=1;
				break;
			}
		}
		if(flag==1){
			dex++;
			printf("%d ",a[i]);
		}
	}
	if(dex==0){
		printf("�ռ�");
	}
	printf("\n");
} 
void chaji(int a[],int b[],int n,int n2)
{														
	int dex=0;
	for(int i=0;i<n;i++){
		int flag=0; 
		for(int j=0;j<n2;j++){
			if(a[i]==b[j]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			dex++;
			printf("%d ",a[i]);
		} 
	}
	if(dex==0){
		printf("�ռ�");
	}
	printf("\n");
} 

int main()
{
	for(int i=0;;i++)
	{
	 	printf("����-1��������\n"); 
	 	printf("�뽫Ԫ�ض����Ϊ��A����������\n");
		int n;
		printf("�����뼯��A��Ԫ�ظ���\n");
		scanf("%d",&n);
		if(n==-1)  break;
		int n2;
		printf("�����뼯��B��Ԫ�ظ���\n");
		scanf("%d",&n2);
		int a[n],b[n2];
		printf("�����뼯��A��Ԫ��\n");
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]); 
		}
		printf("�����뼯��B��Ԫ��\n");
		for(int j=0;j<n2;j++){
			scanf("%d",&b[j]);
		}
		int c;
		printf("����������������\n1������ \n2������ \n3���\n");
		scanf("%d",&c);
		switch(c){
			case 1: printf("A���Ϻ�B���ϲ���Ϊ��\n");
					bingji(a,b,n,n2);break;
			case 2: printf("A���Ϻ�B���Ͻ���Ϊ��\n");
					jiaoji(a,b,n,n2);break;
			case 3: printf("A���Ϻ�B���ϲΪ��\n");
					chaji(a,b,n,n2);break; 
		}
	}
	return 0;
}

