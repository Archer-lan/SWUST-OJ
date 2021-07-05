#include<stdio.h>
struct students {
	long int ID;
	char sub[15]; 
	char name[10];
	float grade[3];
	float Aver;
};
students t;
students stu[1000];
void cmp(int n){
	t=stu[0];
	for(int i=1;i<n;i++){
		if(t.Aver<stu[i].Aver){
			t=stu[i];
		}
	}
}
void aver(int n){
	for(int i=0;i<n;i++){
		stu[i].Aver=(stu[i].grade[0]+stu[i].grade[1]+stu[i].grade[2])/3;
	}
}
void input(int n){
	for(int i=0;i<n;i++){
		scanf("%ld%s%s%f%f%f",&stu[i].ID,stu[i].sub,stu[i].name,&stu[i].grade[0],&stu[i].grade[1],&stu[i].grade[2]);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	input(n);
	aver(n);
	cmp(n);
	for(int i=0;i<n;i++){
		printf("%s %.1f\n",stu[i].name,stu[i].Aver);
	}
	printf("%ld %s %s %.1f %.1f %.1f %.1f\n",t.ID,t.sub,t.name,t.grade[0],t.grade[1],t.grade[2],t.Aver);
	return 0;
}

