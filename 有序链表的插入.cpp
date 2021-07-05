#include<stdio.h>
#include<stdlib.h>
typedef int ElementType;
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
		scanf("%d",&p->Data);
		r->Next=p;
		r=p; 
	}
	r->Next=NULL;
	return L;
}

void Output(List L){
	L=L->Next;
	if(L==NULL)
		printf("NULL");
	while(L){
		printf("%d ",L->Data);
		L=L->Next;
	}
	return ;
}

void Insert(List L,int s,int d,int n){
	List p1=(List)malloc(sizeof(struct Node));
	p1=L;
	List t2=(List)malloc(sizeof(struct Node));
	t2->Data=d;
	t2->Next=NULL;
	for(int i=1;i<n;i++){
		if(p1->Next->Data==s){
			t2->Next=p1->Next;
			p1->Next=t2;
			break;
		}
		p1=p1->Next;
		if(i==n-1&&p1->Next->Data!=s){
			p1=p1->Next;
			p1->Next=t2;
		}
	}
	return ;
}
int main(){
	List L;
	int n;
	scanf("%d",&n);
	L=Input(n);
	int s,d;
	scanf("%d%d",&s,&d);
	Insert(L,s,d,n);
	Output(L);
	return 0;
}
