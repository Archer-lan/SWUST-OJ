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
// ��ջ
void Push(Stack PtrS,ElementType item){
	if(PtrS->Top==MaxSize){
		printf("��ջ������")�� 
	}
	else{
		PtrS->Data[++(PtrS->Top)]=item;
		return ;
	}
} 
//��ջ
ElementType Pop(Stack PtrlS){
	if(PtrS->Top==-1){
		printf("��ջ��")��
		return NULL; 
	}
	else
		return (PtrS->Data[(PtrS->Top)--])
} 
int main(){
	
	return 0;
} 
