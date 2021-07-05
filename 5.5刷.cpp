#include<stdio.h>
void c2(int n,double a[][6],float *p){
	for(int i=0;i<n;i++){
		float d=0;
		for(int j=1;j<6;j++){
			d+=a[i][j];
		}
		(*(p+i))=d/5;
	}
}
void c3(double a[][6],float A2[],int n){
	for(int i=1;i<6;i++){
		float d=0;
		for(int j=0;j<n;j++){
			d+=a[j][i];
		}
		A2[i]=d/n;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	double a[n][6];
	for(int i=0;i<n;i++){
		for(int j=0;j<6;j++){
			scanf("%lf",&a[i][j]);
		}
	}
	float A1[n],A2[6]; float *p;p=&A1[0];
	c2(n,a,p);
	c3(a,A2,n);
	for(int i=0;i<n;i++){
		printf("%.0f %.0f %.0f %.0f %.0f %.0f %.1f\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5],A1[i]);
	}
	for(int i=1;i<6;i++)
		printf("%.1f ",A2[i]);
	return 0; 
	}
