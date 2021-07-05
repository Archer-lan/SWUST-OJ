#include<stdio.h>
void turn1(int n){
	if(n==0)
		return;
	else{
		turn1(n/2);
		printf("%d",n%2);
		return;
	}
}
void turn2(int n){
	if(n==0)
		return;
	else{
		turn2(n/8);
		printf("%d",n%8);
		return;
	}
}
int main(){
	int num;
	while(~scanf("%d",&num)){
		if(num==0)
			printf("%d",num);
		turn1(num);
		printf("\n");
		if(num==0)
			printf("%d",num);	
		turn2(num);
		printf("\n");
	}
	return 0;
}

