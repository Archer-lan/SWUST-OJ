#include<stdio.h>
#include<stdlib.h>
struct pation{
	int id;
	int age;
};
pation pa[120];
pation a[120];
pation y[120];
int cmp1(const void *a,const void *b){
	pation *c=(pation *)a;
	pation *d=(pation *)b;
	return c->age-d->age;
}
int cmp2(const void *a,const void *b){
	pation *c=(pation *)a;
	pation *d=(pation *)b;
	return c->id-d->id;
}
int main(){
	int n,j=0,k=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d%d",&pa[i].id,&pa[i].age);
		if(pa[i].age>=60){
			a[j++]=pa[i];
		}
		else{
			y[k++]=pa[i];
		}
	}
	qsort(pa,n-1,sizeof(pa[0]),cmp1);
	qsort(a,j-1,sizeof(a[0]),cmp1);
	qsort(y,k-1,sizeof(y[0]),cmp2);
	for(int i=0;i<n;i++) printf("%06d %d\n",pa[i].id,pa[i].age);
	printf("\n");
	for(int i=0;i<j;i++) printf("%06d %d\n",a[i].id,a[i].age);
	for(int i=0;i<k;i++) printf("%06d %d\n",y[i].id,y[i].age);
	return 0;
}
