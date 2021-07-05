#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

typedef struct Link{
	int coe;
	int num;
	Link *Next;
}L;

void Creat(L *&P);

L *Plus(L *a,L *b);

void Display(L *p);

int main(){
	L *A,*B,*C;
	A=B=C=NULL;
	Creat(A);
	Creat(B);
	C=Plus(A,B);
	Display(C);
	return 0;
}

void Creat(L *&P){
	L *s=(L *)malloc(sizeof(L));
	P=s;
	int a,b;
	scanf("%d,%d",&a,&b);
	if(a!=0||b!=0){
		s->coe=a;
		s->num=b;
	}
	while(~scanf("%d,%d",&a,&b)){
		if(a==0&&b==0)break;
		L *t=(L *)malloc(sizeof(L));
		t->coe=a;
		t->num=b;
		s->Next=t;
		s=t;
	}
	s->Next=NULL;
	return ;
}

L *Plus(L *a,L *b){
	L *C=(L *)malloc(sizeof(L));
	L *p=C;
	p->coe=0;
	p->num=0;
	while(a!=NULL&&b!=NULL){
		if(a->num<b->num){
			if(a->num==p->num){
				p->coe+=a->coe;
			}
			else{
				p->Next=a;
				p=a;
			}
			a=a->Next;
		}
		else if(a->num>b->num){
			if(b->num==p->num){
				p->coe+=b->coe;
			}
			else{
				p->Next=b;
				p=b;
			}
			b=b->Next;
		}
		else{
			L *t=(L *)malloc(sizeof(L));
			t->coe=a->coe+b->coe;
			t->num=a->num;
			if(t->num==p->num){
				p->coe+=t->coe;
				free(t);
			}
			else{
				p->Next=t;
				p=t;
			}
			a=a->Next;
			b=b->Next;
		}
	}
	if(a==NULL){
		while(b!=NULL){
			p->Next=b;
			p=b;
			b=b->Next;
		}
	} 
	else{
		while(a!=NULL){
			p->Next=a;
			p=a;
			a=a->Next;
		}
	}
	p->Next=NULL;
	return C;
}

void Display(L *p){
	while(p->Next!=NULL){
		if(p->coe!=0){
			cout<<p->coe<<'x'<<'^'<<p->num<<'+';
		}
		p=p->Next;
	}
	cout<<p->coe<<'x'<<'^'<<p->num;
	return ;
}
