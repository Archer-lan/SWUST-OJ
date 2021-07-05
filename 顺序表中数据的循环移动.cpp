#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;
typedef struct Node *L;
struct Node{
	ElementType Data;
	L Next;
};

L Creat(int n){
	L s=NULL,t=NULL,p=NULL;
	s=(L)malloc(sizeof(struct Node));
	scanf("%d",&s->Data);
	p=s;
	for(int i=0;i<n-1;i++){
		t=(L)malloc(sizeof(struct Node));
		scanf("%d",&t->Data);
		s->Next=t;
		s=t;
	}
	s->Next=p;
	return p;
}

void Print(L p,int n){
	L t=NULL;
	for(int i=0;i<n;i++){
		t=p;
		printf("%d ",p->Data);
		p=p->Next;
		free(t);
	}
}

L Change(int m,L p){
	for(int i=0;i<m;i++){
		p=p->Next;
	}
	return p;
}

int main(){
	int n,m;
	L P=NULL;
	scanf("%d",&n);
	P=Creat(n);
	scanf("%d",&m);
	if(m<n&&m>0){
		P=Change(m,P);
		Print(P,n);
	}
	else
		printf("error!");
	return 0;
}
