#include<stdio.h>
#include<string.h>
int l(int day){
	for(int i=0;;i++){
		if((i*i+i*4)>day)
			return i-1;
	}
}
int main(){
	int day;
	while(~scanf("%d",&day)){
		int level,sun,moon,star;
		if(day==0)
			break;
		level=l(day);
		sun=level/16;
		moon=(level%16)/4;
		star=((level)%16)%4;
		printf("%d\n%d %d %d\n",level,sun,moon,star);
	}
	return 0;
}
