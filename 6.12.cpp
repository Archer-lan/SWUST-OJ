#include<stdio.h>
#include<stdlib.h>
typedef int Elementype;
typedef struct Node *Ptr;
struct Node{
	Elementype Data;
	Ptr Next;
};
typedef Ptr List;

List Read(){
	List L=(List)malloc(sizeof(struct Node));
	L=L->Next;
	List r=L;
	while(1){
		List p=(List)malloc(sizeof(struct Node));
		scanf("%d",&p->Data);
		if(p->Data=-1)
			break;
		r->Next=p;
		r=p;
	}
	r->Next=NULL;
	return L;
}

void Put(List L){
	List r=(List)malloc(sizeof(struct Node));
	r=L;
	while(r->Next!=NULL){
		
	}
}
void Output(List L){
	while(L){
		printf("%d",L->Data);
		L=L->Next;
	}
	return ;
} 
int main(){
	List L;
	return 0;
} 
