#include"stdio.h"
void zifan(int s[][100],int n)
{
	int flag=0;
	for(int i=0;i<n;i++){
		if(s[i][i]==0){
			flag=1;
			break;
		}
	}
	if(flag==0) printf("�����Է���\n\n");
	else printf("�������Է���\n\n");	
}
void fanzifan(int s[][100],int n)
{
	int flag=0;
	for(int i=0;i<n;i++){
		if(s[i][i]==1){
			flag=1;
			break;
		}
	}
	if(flag==0) printf("���з��Է���\n\n");
	else printf("�����з��Է���\n\n"); 
}
void duicheng(int s[][100],int n)
{
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(s[i][j]!=s[j][i]){
				flag=1;
				break;
			}
		}
		if(flag==1){
			break;
		}
	}
	if(flag==0) printf("���жԳ���\n\n");
	else printf("�����жԳ���\n\n");
}
void fanduicheng(int s[][100],int n)
{
	int flag=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(s[i][j]*s[j][i]!=0){
				flag=1;
				break;
			}
		}
		if(flag==1){
			break;
		}
	}
	if(flag==0) printf("���з��Գ���\n\n"); 
	else printf("�����з��Գ���\n\n");
}
void chuandi(int s[][100],int n)
{
	int flag=0;
	for(int i=0;i<n;i++){
		for(int k=0;k<n;k++){
			for(int j=0;j<n;j++){
				if(s[i][k]==1&&s[k][j]==1){
					if(s[i][j]!=1){
						flag=1;
						break;
					}
				}
			}
			if(flag==1) break;
		}
		if(flag==1) break;
	}
	if(flag==0) printf("���д�����\n\n");
	else printf("�����д�����\n\n");
}
int main()
{
	int n;
	for(int x=0;;x++)
	{
		int s[100][100];
		printf("�������ϵ����Ĵ�С��(��С������100)(����-1����)\n");
		scanf("%d",&n);
		if(n==-1) break;
		else{
			printf("�������ϵ�����Ԫ��\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++)
					scanf("%d",&s[i][j]);
			}
			int n2;
			printf("��������������\n");
			printf("1:�Է���\n2:���Է���\n3:�Գ���\n4:���Գ���\n5:������\n");
			scanf("%d",&n2);
			switch(n2)
			{
				case 1:printf("�Է����жϽ��Ϊ:\n");
			  		 zifan(s,n);break;
				case 2:printf("���Է����жϽ��Ϊ:\n");
			  	 	fanzifan(s,n);break;
				case 3:printf("�Գ����жϽ��Ϊ:\n");
			   		duicheng(s,n);break;
				case 4:printf("���Գ����жϽ��Ϊ:\n");
			   		fanduicheng(s,n);break;
	   	 		case 5:printf("�������жϽ��Ϊ:\n");
			   		chuandi(s,n);break;
	 		}
	 	}
	}
	return 0;
}

