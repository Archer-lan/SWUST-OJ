#include<stdio.h>
#include<stdlib.h>
typedef char ElementType;
typedef struct Node *Ptr;
struct Node{
	ElementType Data;
	Ptr Next;
};
typedef Ptr List;

List Input(int n){
	List L=(List)malloc(sizeof(struct Node));
	L->Next=NULL;
	List r=L;
	for(int i=0;i<n;i++){
		List p=(List)malloc(sizeof(struct Node));
		scanf(" %c",&p->Data);
		r->Next=p;
		r=p;
	}
	r->Next=NULL;
	return L;
}
void Combine(List L1,List L2,int n){
	L2=L2->Next;
	List t=(List)malloc(sizeof(struct Node));
	t=L1;
	for(int i=0;i<n;i++){
		t=t->Next;
	}
	t->Next=L2;
	return ;
}

void Output(List L){
	L=L->Next;
	while(L){
		printf("%c ",L->Data);
		L=L->Next;
	}
	return ;
}
int main(){
	int n1,n2;
	List L1,L2;
	scanf("%d\n",&n1);
	L1=Input(n1);
	scanf("%d",&n2);
	L2=Input(n2);
	Combine(L1,L2,n1);
	Output(L1);
	return 0;
}
