#include<stdio.h>
struct student{
	int score;
	int clas;
};
student stu[1000];

int main(){
	int n;
	while(~scanf("%d",&n)){
		int sum1=0,sum2=0,c1=0,c2=0;
		for(int i=0;i<n;i++){
			scanf("%d%d",&stu[i].score,&stu[i].clas);
		}
		for(int i=0;i<n;i++){
			if(stu[i].clas==1){
				c1++;
				sum1+=stu[i].score;
			}
			else{
				c2++;
				sum2+=stu[i].score; 
			}
		}
		sum1=sum1/c1;
		sum2=sum2/c2;
		printf("%d %d\r\n",sum1,sum2);
	}
	return 0;
}
