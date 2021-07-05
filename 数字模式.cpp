#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n],max=0,min;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=0;
	}
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++){
			if(a[i]==a[j])
				b[i]++;
		}
	for(int i=0;i<n;i++)
		for(int j=i;j<n;j++){
			if(b[i]<b[j])
				max=a[j];
			if(a[i]>a[j])
				min=a[j];
		}
	if(max==0)
		printf("%d\n",min);
	else
		printf("%d\n",max);
	return 0;
}
