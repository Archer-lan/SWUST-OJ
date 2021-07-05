#include<stdio.h>
#include<stdlib.h>
typedef struct Stack *Ptr;
struct Stack{
	int data;
	Ptr Next;
};
typedef Ptr S;

S Push(S p,int data){
	S t=(S)malloc(sizeof(struct Stack));
	t->data=data;
	t->Next=p;
	p=t;
	return p;
}

void Display(S p){
	while(p){
		S t=p;
		printf("%d",p->data);
		p=p->Next;
		free(t);
	}
}

int main(){
	S P=NULL;
	int n;
	scanf("%d",&n);
	while(n){
		P=Push(P,n%2);
		n/=2;
	}
	Display(P);
	return 0;
} 
