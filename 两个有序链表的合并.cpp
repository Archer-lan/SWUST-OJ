#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node{
	ElementType Data;
	PtrToNode Next;
};
typedef PtrToNode List;

List Read(){
	List L=(List)malloc(sizeof(struct Node));
	L->Next=NULL;
	List r=L;
	while(1){
		List p=(List)malloc(sizeof(struct Node));
		scanf("%d",&p->Data);
		if(p->Data==-1)
			break;
		r->Next=p;
		r=p;
	}
	r->Next=NULL;
	return L;
}

void Print(List L){
	List p=L->Next;
	if(p==NULL)
		printf("NULL");
	else{
		printf("%d ",p->Data);
		while(p){
			p=p->Next;
			printf("%d ",p->Data);
		}
	}
	printf("");
}

List Merge(List L1,List L2){
	List p1,p2,p3,L;
	L=(List)malloc(sizeof(struct Node));
	p1=L1->Next;
	p2=L2->Next;
	p3=L;
	while(p1&&p2){
		if(p1->Data<=p2->Data){
			p3->Next=p1;
			p3=p1;
			p1=p1->Next;
		}
		else{
			p3->Next=p2;
			p3=p2;
			p2=p2->Next;
		}
	}
	p3->Next=p1?p1:p2;
	L1->Next=NULL;
	L2->Next=NULL;
	return L;
}
int main(){
	List L1,L2,L;
	L1=Read();
	L2=Read();
	L=Merge(L1,L2);
	Print(L);
	return 0;
}
