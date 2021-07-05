#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	double a[4][7];
	float b[5];
	for(int i=0;i<n;i++)
		scanf("%lf%lf%lf%lf%lf%lf",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4],&a[i][5]);
	for(int i=0;i<n;i++){
		float d=0;
		for(int j=1;j<6;j++){
			d+=a[i][j];
		}
		a[i][6]=d/5;
	}
	for(int i=1;i<6;i++){
		float d=0;
		for(int j=0;j<n;j++){
			d+=a[j][i];
		}
		b[i]=d/4;
	}
	for(int i=0;i<4;i++){
		printf("%.0lf %.0lf %.0lf %.0lf %.0lf %.0lf %.1lf\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5],a[i][6]);
		}
	printf("%.1lf %.1lf %.1lf %.1lf %.1lf\n",b[1],b[2],b[3],b[4],b[5]);
	return 0;
} 
