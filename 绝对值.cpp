#include<stdio.h>
int main()
{
  int n,x,y,h;
  scanf("%d%d%d",&n,&x,&y);
  h=n-y/x;
  if((float)y/x!=y/x)
  {
  h--;
  }
  else
  {
  h=h;
  }
  if(h>=0)
  {
  printf("%d\n",h);
  }
  else
  {
  printf("0\n");
  }
  return 0;}
