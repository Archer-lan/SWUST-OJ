#include<stdio.h>
int main(){
	int m=100;
	for(m;m<=1000;m++){
		if(m==m%10*m%10*m%10+(m/10)%10*(m/10)%10*(m/10)%10+m/100*m/100*m/100)
		    printf("%d\n",m);
		else
		    m==m;
	}
	return 0;
}
