
#include <stdio.h>
#include <stdlib.h>

#define ERROR -1
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode List;

List Read(){
	List p=NULL,s=NULL,t=NULL;
	s=(List)malloc(sizeof(struct LNode));
	scanf("%d",&s->Data);
	p=s;
	for(int i=0;;i++){
		t=(List)malloc(sizeof(struct LNode));
		scanf("%d",&t->Data);
		if(t->Data==-1)
			break;
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return p;
}

ElementType FindKth( List L, int K ){
	List t=L;
	for(int i=0;i<K-1;i++){
		if(t==NULL)
			return ERROR;
			t=t->Next;
	}
	return t->Data;
}

List Change(List L){
	int k=0;
	List t=L;
	List p=NULL;
	List s=NULL;
	s=(List)malloc(sizeof(struct LNode));
	if(t->Data<0){
		s=t;
		k=1;
	}
	p=s;
	while(t->Next){
		if(t->Next->Data<0){
			s=(List)malloc(sizeof(struct LNode));
			s->Next=t->Next;
			s=t->Next;
			t->Next=t->Next->Next;
		}
		t=t->Next;
	}
	if(k==1){
		s->Next=L->Next;
		return p; 
	}
	else{
		s->Next=L;
		return p;
	}
}

void Split(List L){
	List A=NULL;
	List B=NULL;
	List t,z;
	t=L;
	L=L->Next;
	z=L;
	L=L->Next;
	A=t,B=z;
	for(int i=1;;i++){
		if(L)
			break;
		if(i%2==0){
			t->Next=L;
			t=L;
		}
		else{
			z->Next=L;
			z=L;
		}
	}
}

int main()
{
    int N, K;
    ElementType X;
    List L = Read();
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &K);
        X = FindKth(L, K);
        if ( X!= ERROR )
            printf("%d ", X);
        else
            printf("NA ");
    }
    return 0;
}


