#include<stdio.h>
struct students{
	char name[15];
	char ID[15];
	int grades;
};
struct students stu[101];
struct students t;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%s%d",stu[i].name,stu[i].ID,&stu[i].grades);
	}
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n-1-i;j++){
			if(stu[j].grades<stu[j+1].grades){
				t=stu[j];
				stu[j]=stu[j+1];
				stu[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)	printf("%s %s %d\n",stu[i].name,stu[i].ID,stu[i].grades);
	printf("%s %s\n",stu[0].name,stu[0].ID);
	printf("%s %s\n",stu[n-1].name,stu[n-1].ID);
	return 0;
}
