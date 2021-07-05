#include<stdio.h>
int main(){
  int a;
  scanf("%d",a);
  for(a=100;a<1000;a++){
    if(a==(a/100)*(a/100)*(a/100)+((a/10)%10)*((a/10)%10)*((a/10)%10)+(a%10)*(a%10)*(a%10))
      printf("%d\n",a);
    else
      a=a;}
  return 0;
}
