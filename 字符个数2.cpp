#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    char n; 
    int blank=0,num=0,letter=0,other=0; 
    while(scanf("%c",&n)!=EOF&&n!='\n') 
    { 
        if((n<='z'&&n>='a')||(n<='Z'&&n>='A')) 
            letter++; 
        else
            if(n<='9'&&n>='0') 
                num++; 
            else
                if(n==' ') 
                    blank++; 
                else
                    other++; 
    } 
    printf("%d %d %d %d\n",letter,num,blank,other); 
    return 0; 
}
