#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double dist;
double ma;
int j=0;
struct ip{
	double x;
	double y;
	double z;
};
ip p[1000];
ip Acm;
ip Heart;
ip middle;
ip max;
void mid(){
	middle.x=(Acm.x+Heart.x)/2;
	middle.y=(Acm.y+Heart.y)/2;
	middle.z=(Acm.z+Heart.z)/2;
	return ;
}
void cmp(){
	dist=sqrt(pow(p[j].x-middle.x,2)+pow(p[j].y-middle.y,2)+pow(p[j].z-middle.z,2));
	if(dist<=ma){
		ma=dist;
		max=p[j];
		}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf%lf%lf",&p[i].x,&p[i].y,&p[i].z);
	}
	scanf("%lf%lf%lf",&Acm.x,&Acm.y,&Acm.z);
	scanf("%lf%lf%lf",&Heart.x,&Heart.y,&Heart.z);
	mid();
	ma=sqrt(pow(p[0].x-middle.x,2)+pow(p[0].y-middle.y,2)+pow(p[0].z-middle.z,2));
	for(j;j<n;j++)
		cmp();
	printf("%.3lf %.3lf %.3lf\n",max.x,max.y,max.z);
	return 0;
} 
