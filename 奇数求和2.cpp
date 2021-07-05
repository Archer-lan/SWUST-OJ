#include<stdio.h>
int main(){
  int m,n,a,sum;
  sum=0;
  a=7;
  scanf("%d%d",&m,&n);
  for(a;a<=n&&a>=m;a++){
    if(a%2==1)
      sum=a+sum;
    else
      sum=sum;
  }
  printf("%d\n",sum);
  return 0;
} 
