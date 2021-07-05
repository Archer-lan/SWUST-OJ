#include<stdio.h>
void wuxiang(int n){
    int a[100][100];
    printf("请输入邻接矩阵关系表\n");  
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
    if(flag==1) printf("不是欧拉图\n\n");
	else printf("是欧拉图\n\n");
} 
void youxiang(int n){
   int a[100][100];
   printf("请输入邻接矩阵关系表\n");  
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
    if(dex==1) printf("不是欧拉图\n\n");
	else{
		if(flag==1)
			printf("不是欧拉图\n\n");
		else
			printf("是欧拉图\n\n");
	}
} 
int main(){
	while(1){
		int r=0,n;
		printf("请选择功能\n");
		printf("1：无向图的判定\n");
		printf("2: 有向图的判定\n");
		printf("3：退出程序\n");
		scanf("%d",&r);
		if(r==3)
		break;
		else if(r==1) {
			printf("请输入邻接矩阵的大小\n");
			scanf("%d",&n);
			wuxiang(n);
		}
		else {
			printf("请输入邻接矩阵的大小\n");
			scanf("%d",&n);
			youxiang(n);
		}
	}
	return 0;
} 

