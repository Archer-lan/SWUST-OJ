#include<stdio.h>
int main(){
	int price,n;
	while(~scanf("%d%d",&price,&n)){
		int L[n],Q[n],sum1=0,sum2=0;
		for(int i=0;i<n;i++)
			scanf("%d",&L[i]);
		for(int i=0;i<n;i++)
			scanf("%d",&Q[i]);
		for(int i=0;i<n;i++){
			sum1+=L[i];
			sum2+=Q[i];
			if(sum1>=price&&sum2<price){
				printf("xiaoL\n");
				break;
			} 
			if(sum1<price&&sum2>=price){
				printf("xiaoQ\n");
				break;
			}
			if(sum1>=price&&sum2>=price){
				printf("Both\n");
				break;
			}	
		}
		if(sum1<price&&sum2<price)
				printf("None\n");
	}
	return 0;
}
