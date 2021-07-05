#include<stdio.h>
int main(){
	int a,b,c=0,d,e,f,g;
	while(~scanf("%d%d",&a,&b)){
		if(a==0&&b==0)
			break;
		e=a%100;f=(a/10)%10;g=a%10;
		for(int i=e;;i++){
			for(int j=f;;j++){
				for(int k=g;;k++){
					c=i*100+j*100+k;
					d=i*i*i+j*j*j+k*k*k;
					if(c==d){
						printf("%d\n",c);
					}
					if(c>b)
						break;
				}
				if(c>b)
					break;
			}
			if(c>b)
				break;
		}
		if(c==0)
			printf("no");
	}
	return 0;
}
