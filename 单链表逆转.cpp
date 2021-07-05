#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node{
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read();
void Print( List L );
List Reverse( List L );

int main(){
    List L1, L2;
    L1 = Read();
    L2 = Reverse(L1);
    Print(L1);
    Print(L2);
    return 0;
}
List Read(){
	int n;
	scanf("%d",&n);
	List p=NULL,s=NULL,Z=NULL;
	s=(List)malloc(sizeof(struct Node));
	scanf("%d",&s->Data);
	p=s;
	n--;
	while(n){
		Z=(List)malloc(sizeof(struct Node));
		scanf("%d",&Z->Data);
		s->Next=Z;
		s=Z;
		n--;
	}
	s->Next=NULL;
	return p;
}
void Print( List L ){
	while(L){
		printf("%d ",L->Data);
		L=L->Next;
	}
	printf("\n");
	return ;
}
List Reverse( List L ){
	List t=NULL;
	List newL=NULL;
	while(L){
		t=L->Next;
		L->Next=newL;
		newL=L;
		L=t;
	}
	return newL;
}

