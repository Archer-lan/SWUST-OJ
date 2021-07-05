#include<stdio.h>
#include<string.h>
struct time{
	int hour;
	char c;
	int minute;
};
time t[1000];
time b;
void x(int n,int h[]){
	for(int i=0;i<n;i++){
		h[i]=b.hour+t[i].hour;
		if(h[i]>=24)
			h[i]-=24;
	}
}
void z(int n,int m[],int h[]){
	for(int i=0;i<n;i++){
		m[i]=b.minute+t[i].minute;
		if(m[i]>=60){
			m[i]-=60;
			h[i]+=1;
			if(h[i]>=24)
				h[i]-=24;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d %c %d",&t[i].hour,&t[i].c,&t[i].minute);
	b.hour=13;b.minute=15;
	int h[n],m[n];
	x(n,h);
	z(n,m,h);
	for(int i=0;i<n;i++)
		printf("%d:%d\n",h[i],m[i]); 
	return 0;
}
