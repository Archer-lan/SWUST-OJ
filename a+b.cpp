#include<stdio.h>
#include<stdlib.h>
struct pation{
	char id[20];
	int age;
	int num;
};
pation pa[120];
pation a[120];
pation y[120];
int cmp1(const void *a,const void *b){
	pation *c=(pation *)a;
	pation *d=(pation *)b;
	if(c->age==d->age) return c->num-d->num;
	return d->age-c->age;
}
int cmp2(const void *a,const void *b){
	pation *c=(pation *)a;
	pation *d=(pation *)b;
	return c->num-d->num;
}
int main(){
	int n,j=0,k=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%d",&pa[i].id,&pa[i].age);
		pa[i].num=i;
		if(pa[i].age>=60){
			a[j++]=pa[i];
		}
		else{
			y[k++]=pa[i];
		}
	}
	qsort(a,j,sizeof(a[0]),cmp1);
	qsort(y,k,sizeof(y[0]),cmp2);
	for(int i=0;i<j;i++) printf("%s\n",a[i].id);
	for(int i=0;i<k;i++) printf("%s\n",y[i].id);
	return 0;
}
