#include<stdio.h>
void wuxiang(int n){
    int a[100][100];
    printf("�������ڽӾ����ϵ��\n");  
    for(int i=0;i<n;i++){
   	    for(int j=0;j<n;j++){
   	  	    scanf("%d",&a[i][j]);
 	    }
    }
	int flag=0;
	for(int i=0;i<n;i++){
		int os=0;
   	    for(int j=0;j<n;j++){
   	  	    if(a[i][j]==1){
   	  	    	os++;	
			}
 	    }
 	    if(os%2!=0){ 
 	    	flag=1;
 	    	break;
		}else{
			if(os==0){ 
				flag=1;
				break;
			}
		} 
    }
    if(flag==1) printf("����ŷ��ͼ\n\n");
	else printf("��ŷ��ͼ\n\n");
} 
void youxiang(int n){
   int a[100][100];
   printf("�������ڽӾ����ϵ��\n");  
   for(int i=0;i<n;i++){
   	  for(int j=0;j<n;j++){
   	  		scanf("%d",&a[i][j]);
		}
   } 
    int flag=0,dex=0;
    for(int i=0;i<n;i++){
    	int in=0,out=0;
   	    for(int j=0;j<n;j++){ 
   		    if(a[i][j]==1){
   		        out++;	
			} 
	    }
	    for(int k=0;k<n;k++){ 
	    	if(a[k][i]==1){
	    		in++;
			}
		}
		if(in!=out){
			flag=1;
			break;
		}else{
			if(in==0){ 
				dex=1;
				break;
			}
		} 
    }
    if(dex==1) printf("����ŷ��ͼ\n\n");
	else{
		if(flag==1)
			printf("����ŷ��ͼ\n\n");
		else
			printf("��ŷ��ͼ\n\n");
	}
} 
int main(){
	while(1){
		int r=0,n;
		printf("��ѡ����\n");
		printf("1������ͼ���ж�\n");
		printf("2: ����ͼ���ж�\n");
		printf("3���˳�����\n");
		scanf("%d",&r);
		if(r==3)
		break;
		else if(r==1) {
			printf("�������ڽӾ���Ĵ�С\n");
			scanf("%d",&n);
			wuxiang(n);
		}
		else {
			printf("�������ڽӾ���Ĵ�С\n");
			scanf("%d",&n);
			youxiang(n);
		}
	}
	return 0;
} 

