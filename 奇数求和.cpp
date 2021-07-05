#include<stdio.h>
int main()
{
  int m,n,sum=0,i;
  scanf("%d%d",&m,&n);
  for(i=0;i>=m&&i<=n;i++){
      if(i%2==1)
        sum+=i;
      else
        sum=sum;
  }
  printf("%d",sum);
  return 0;
}
