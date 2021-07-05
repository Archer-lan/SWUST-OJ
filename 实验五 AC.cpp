#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n); 
	double a[n][6],Aver1[n],Aver2[6],count1,count2;
	for(int i=0;i<n;i++)
		scanf("%lf%lf%lf%lf%lf%lf",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4],&a[i][5]);
	for(int i=0;i<n;i++){
		count1=0;
		for(int j=1;j<6;j++){
			count1+=a[i][j];
		}
		Aver1[i]=count1/5;
	}
	for(int j=1;j<6;j++){
		count2=0;
		for(int i=0;i<n;i++){
			count2+=a[i][j];
		}
		Aver2[j]=count2/n;
	}
	for(int i=0;i<n;i++){
		printf("%.0f %.0f %.0f %.0f %.0f %.0f %.1f\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5],Aver1[i]);	
	}
	for(int j=1;j<6;j++)
		printf("%.1f ",Aver2[j]);
	return 0;
}
