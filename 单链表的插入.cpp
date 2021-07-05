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

int Insert(List L,int s,int d,int n){
	List p1=(List)malloc(sizeof(struct Node));
	p1=L;
	List t2=(List)malloc(sizeof(struct Node));
	t2->Data=d;
	t2->Next=NULL;
	for(int i=1;i<n;i++){
		if(i==s){
			t2->Next=p1->Next;
			p1->Next=t2;
			break;
		}
		p1=p1->Next;
		if(i==n-1&&i!=s){
			printf("error!");
			return 1;
		}
	}
	return 2;
}
int main(){
	List L;
	int n,c;
	scanf("%d",&n);
	L=Input(n);
	int s,d;
	scanf("%d%d",&s,&d);
	c=Insert(L,s,d,n);
	if(c==2)Output(L);
	return 0;
}
