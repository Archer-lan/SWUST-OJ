#include<stdio.h>
#include<stdlib.h>
struct LNode{
	int Data;
	LNode *Next;
};
typedef struct LNode *List;

List Creat(int n){
	List L,r;
	L=(List)malloc(sizeof(struct LNode));
	r=L;
	for(int i=1;i<=n;i++){
		List p=(List)malloc(sizeof(struct LNode));
		p->Data=i;
		r->Next=p;
		r=p;
	}
	L=L->Next;
	r->Next=L;
	return L;
}

void Print(List L){
	L=L->Next;
	if(L==NULL) return ;
	while(L){
		printf("%d ",L->Data);
		L=L->Next;
	}
}

List Insert(int n,int m,int k,List L){
	List p=L;
	List s=(List)malloc(sizeof(struct LNode));
	s->Data=k;
	for(int i=0;i<m-1;i++){
		p=p->Next;
	}
	s->Next=p->Next;
	p->Next=s;
	return L;
}

List Delete(int n,int m,List L){
	List p=L;
	for(int i=0;i<m-2;i++)
		p=p->Next;
	p->Next=p->Next->Next;
	return L;
}

List Search(int n,int m,List L){
	if(m<=n)
		printf("ok");
}

void Jose(int m,List L){
	List t=L,s=L;
	while(t->Next!=t){
		for(int i=0;i<m-1;i++){
			s=t;
			t=t->Next;
		}
		s->Next=t->Next;
		free(t);
		t=s->Next;
	}
	printf("%d",t->Data);
	free(t);
}

int main(){
	int n;
	scanf("%d",&n);
	List L;
	L=Creat(n);
	int m,k;
	scanf("%d",&m);Jose(m,L);
	//if(m>n||m<0) printf("error");
	//else{
		
	//}
	return 0;
}
