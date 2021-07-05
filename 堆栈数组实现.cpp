#include<stdio.h>
#include<stdlib.h>
#define MaxSize 100
typedef ElementType int;
typedef struct SNode *Stack;
struct SNode{
	ElementType Data[MaxSize];
	int Top;
};
SNode S;
Stack PtrS;
// ÈëÕ»
void Push(Stack PtrS,ElementType item){
	if(PtrS->Top==MaxSize){
		printf("¶ÑÕ»ÒÑÂú£¡")£» 
	}
	else{
		PtrS->Data[++(PtrS->Top)]=item;
		return ;
	}
} 
//³öÕ»
ElementType Pop(Stack PtrlS){
	if(PtrS->Top==-1){
		printf("¶ÑÕ»¿Õ")£»
		return NULL; 
	}
	else
		return (PtrS->Data[(PtrS->Top)--])
} 
int main(){
	
	return 0;
} 
