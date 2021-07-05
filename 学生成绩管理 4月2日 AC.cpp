#include<stdio.h>
#include<string.h>
struct students{
	int ID;
	char classes[20];
	char name[20];
	float grade[3];
	float aver;
};
students stu[1000];
students t;
void input(int n){
	for(int i=0;i<n;i++)
		scanf("%d%s%s%f%f%f",&stu[i].ID,&stu[i].classes,&stu[i].name,&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);
}
void average(int n){
	for(int i=0;i<n;i++)
		stu[i].aver=(stu[i].grade[0]+stu[i].grade[1]+stu[i].grade[2])/3;
}
void compare(int n){
	t=stu[0];
	for(int i=0;i<n;i++)
		if(t.aver<stu[i].aver)
			t=stu[i];
}
int main(){
	int n;
	scanf("%d",&n);
	input(n);
	average(n);
	compare(n);
	for(int i=0;i<n;i++)
		printf("%s %.1f\n",stu[i].name,stu[i].aver);
	printf("%d %s %s %.1f %.1f %.1f %.1f\n",t.ID,t.classes,t.name,t.grade[0],t.grade[1],t.grade[2],t.aver);
	return 0;
}
