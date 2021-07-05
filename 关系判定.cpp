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
	if(flag==0) printf("具有自反性\n\n");
	else printf("不具有自反性\n\n");	
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
	if(flag==0) printf("具有反自反性\n\n");
	else printf("不具有反自反性\n\n"); 
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
	if(flag==0) printf("具有对称性\n\n");
	else printf("不具有对称性\n\n");
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
	if(flag==0) printf("具有反对称性\n\n"); 
	else printf("不具有反对称性\n\n");
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
	if(flag==0) printf("具有传递性\n\n");
	else printf("不具有传递性\n\n");
}
int main()
{
	int n;
	for(int x=0;;x++)
	{
		int s[100][100];
		printf("请输入关系矩阵的大小！(大小不超过100)(输入-1结束)\n");
		scanf("%d",&n);
		if(n==-1) break;
		else{
			printf("请输入关系矩阵的元素\n");
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++)
					scanf("%d",&s[i][j]);
			}
			int n2;
			printf("输入数字输出结果\n");
			printf("1:自反性\n2:反自反性\n3:对称性\n4:反对称性\n5:传递性\n");
			scanf("%d",&n2);
			switch(n2)
			{
				case 1:printf("自反性判断结果为:\n");
			  		 zifan(s,n);break;
				case 2:printf("反自反性判断结果为:\n");
			  	 	fanzifan(s,n);break;
				case 3:printf("对称性判断结果为:\n");
			   		duicheng(s,n);break;
				case 4:printf("反对称性判断结果为:\n");
			   		fanduicheng(s,n);break;
	   	 		case 5:printf("传递性判断结果为:\n");
			   		chuandi(s,n);break;
	 		}
	 	}
	}
	return 0;
}

