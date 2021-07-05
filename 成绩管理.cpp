#include<stdio.h>
struct student{
	int ID[10];
	int Eng;
	int Math;
	int C;
	int Music;
	int Art;
};
int main(){
	struct student stu;
	int n;
	scanf("%d",&n);
	int Aver1[10],Aver2[10];
	for(int i=0;i<n;i++)
		scanf("%d%d%d%d%d%d",&stu);
	for(int i=0;i<n;i++)
		printf("%d %d %d %d %d %d\n",stu);
	return 0;
}
