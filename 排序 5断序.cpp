#include<stdio.h>
#include<string.h>
long long int a[10000];
void cmp(char c[],int j,int i){
	switch(c[j]){
		case '0': a[i]+=0;break;
		case '1': a[i]+=1;break;
		case '2': a[i]+=2;break;
		case '3': a[i]+=3;break;		
		case '4': a[i]+=4;break;
		case '5': a[i]+=5;break;
		case '6': a[i]+=6;break;
		case '7': a[i]+=7;break;
		case '8': a[i]+=8;break;
		case '9': a[i]+=9;break;
	}
	return ;
}
void sort(int l,int r){
	int temp,i,j,t; 
	if(l>r)
		return ;
	i=l;
	j=r;
	temp=a[l];
	while(i<j){
		while(i<j&&a[j]>=temp){
			j--;
		}
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		while(i<j&&a[i]<=temp){
			i++;
		}
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
	a[i]=temp;
	sort(l,i-1);
	sort(i+1,r);
	return ;
}
int main(){
	char c[1000];
	while(~scanf("%s",&c)){
	int lenth,r=0,m=0,t;
	memset(a,0,sizeof(a));
	lenth=strlen(c);
	for(int i=0;;i++){
		m+=1;
		for(int j=m;j<=lenth;j++){
			a[i]=a[i]*10;
			cmp(c,j,i);
			m=j;
			if(c[j]=='5'){
				a[i]=a[i]/10;
				break;
			}
		}
		r=i;
		if(m==lenth)
			break;
	}
	sort(0,r-1);
	for(int i=0;i<r;i++)
		printf("%d ",a[i]);
	printf("\n");
	}
	return 0;
} 
