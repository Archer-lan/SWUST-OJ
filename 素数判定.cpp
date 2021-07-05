#include<stdio.h>
int main(){
	int a,b;
	while(~scanf("%d %d",&a,&b)){
		int c=0;
		if(a==b||a>b)
			break;
		for(int i=a;i<=b;i++){
			if(i==2)
				c++; 
			for(int j=2;j<a;j++){
				if(i/j!=0&&i%j==0)
					break;
				if(j==a-1)
					c++;
			}
		}
		printf("%d\n",c);
	}
	return 0;
} 
