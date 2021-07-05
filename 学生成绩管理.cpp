#include<stdio.h>
struct student{
	int ID[10];
	int Eng[10];
	int Math[10];
	int C[10];
	int Music[10];
	int Art[10];
	float Aver[10];
};
int main(){
	int n;
	float a,Aver2[5],b[5];
	struct student stu;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d %d %d %d %d %d",&stu.ID[i],&stu.Eng[i],&stu.Math[i],&stu.C[i],&stu.Music[i],&stu.Art[i]); 
	for(int i=0;i<n;i++){
		a=stu.Art[i]+stu.C[i]+stu.Eng[i]+stu.Math[i]+stu.Music[i];
		stu.Aver[i]=a/5;
	}
	for(int i=0;i<5;i++){
		b[i]=0;
		for(int j=0;j<4;j++){
			if(i==0)
				b[i]=b[i]+stu.Eng[j];
			if(i==1)
				b[i]+=stu.Math[j];
			if(i==2)
				b[i]+=stu.C[j];
			if(i==3)
				b[i]+=stu.Music[j];
			if(i==4)
				b[i]+=stu.Art[j];
		}
		Aver2[i]=b[i]/n;
	}
	for(int i=0;i<n;i++)
		printf("%d %d %d %d %d %d %.1f\n",stu.ID[i],stu.Eng[i],stu.Math[i],stu.C[i],stu.Music[i],stu.Art[i],stu.Aver[i]);
	for(int i=0;i<5;i++){
		printf("%.1f",Aver2[i]);
		if(i==4)
			printf("\n");
		else
			printf(" ");
		}
	return 0;
}
