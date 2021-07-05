#include<stdio.h>
#include<stdilib.h>
typedef struct SNode *Stack;
struct SNode{
	ElementType Data;
	struct SNode *Next;
};
Stack CreatStack(){
	Stack S;
	S=(Stack)malloc(sizeof(struct SNode));
	S->Next=NULL;
	return S;
}
//ÅÐ¶Ï¶ÑÕ»ÊÇ·ñÎª¿Õ
int IsEmpty(Stack S){
	return (S->Next==NULL);
} 
//²åÈëÔªËØ
void Push(ElementType item,Stack S){
	struct SNode *TmpCell;
	TmpCell=(struct SNode *)malloc(sizeof(struct SNode));
	TmpCell->Data=item;
	S->Next=TmpCell;
} 
//³öÕ»
ElementType Pop(Stack S){
	struct SNode *FirstCell;
	ElementType TopElem;
	if(Is Empty(s)){
		printf("¶ÑÕ»¿Õ£¡")£»
		return NULL; 
	}
	else{
		FirstCell=S->Next;
		S->Next=FirstCell->Next;
		TopElem=FirstCell->Data;
		free(FirstCell);
		return TopElem;
	}
} 
int main(){
	return 0;
}
