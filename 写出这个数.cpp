#include<stdio.h>
#include<string.h>
void test(int t){
	if(t==0) printf("ling");
	if(t==1) printf("yi");
	if(t==2) printf("er");
	if(t==3) printf("san");
	if(t==4) printf("si");
	if(t==5) printf("wu");
	if(t==6) printf("liu");
	if(t==7) printf("qi");
	if(t==8) printf("ba");
	if(t==9) printf("jiu");
	else return ; 
}
int main(){
	char c[101],b[100];
	int a,l;
	a=scanf("%s",c);
	int i=0,sum=0,t=0;
	while(c[i]!='\0'){
		if(c[i]=='0') sum+=0;
		if(c[i]=='1') sum+=1;
		if(c[i]=='2') sum+=2;
		if(c[i]=='3') sum+=3;
		if(c[i]=='4') sum+=4;
		if(c[i]=='5') sum+=5;
		if(c[i]=='6') sum+=6;
		if(c[i]=='7') sum+=7;
		if(c[i]=='8') sum+=8;
		if(c[i]=='9') sum+=9;
		i++;
	}
	i=0;int j=0;
	while(sum!=0){
		i++;
		t*=10;
		t+=sum%10;
		sum=sum/10;
	} 
	while(j!=i){
		j++;
		test(t%10);
		t=t/10;
		if(i!=j)
			printf(" ");
	}
	return 0;
}
