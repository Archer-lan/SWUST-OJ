#include<stdio.h>
int main(){
	int a1,a2;
	while(~scanf("%d %d",&a1,&a2)){
		if(a1>a2){
			int t;
			t=a1;
			a1=a2;
			a2=t;
		} 
		if(a1<=1||a2<=1)
			break;
		int count=0;
		for(int i=a1;i<=a2;i++){
			if(i==2||i==3)
				count++;
			else{
				int b=0;
				for(int j=2;j<i;j++){
					if(i%j==0){
						b++;
						break;
					}
				}
				if(b==0)
					count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
