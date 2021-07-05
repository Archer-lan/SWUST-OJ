#include<stdio.h>
#include<string.h>
int main(){
  char s[10];
  scanf("%s",s);
  for(int i=0;i<strlen(s);i++){
    if(s[i]>='A'&&s[i]<='Z')
      s[i]+=32;
  }
  printf("%s\n",s);
  return 0;
}
