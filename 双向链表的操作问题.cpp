#include<stdio.h>
#include<stdlib.h>
typedef int Elementtype;
typedef struct Node *Ptr;
struct Node{
	Elementtype data;
	Ptr Prior;
	Ptr Next;
};
typedef Ptr L;

L ListInsert(int n){
	L s,t,p;
	p=NULL;
	if(p=NULL){
		s=(L)malloc(sizeof(struct Node));
		scanf("%d",&s->data);
		p=s;printf("%d ",p->data);
	}
	else{
		for(int i=0;i<n-1;i++){
			L m=p;
			p=m;
			t=(L)malloc(sizeof(struct Node));
			scanf("%d",&t->data);
			if(t->data<m->data){
				t->Next=m;
				m->Prior=t;
				m=t;
			}
			else{
				if(i==0){
					s->Next=t;
					t->Prior=s;
					s=t;
				}
				else{
					while(1){
						m=m->Next;
						if(t->data<m->data&&t->data<m->Prior->data){
							m->Prior->Next=t;
							t->Next=m;
							t->Prior=m->Prior;
							m->Prior=t;
						}
						else if(m->Next==NULL){
							m->Next=t;
							t->Prior=m;
							break;
						}
					}
				}
			}
		}
		s=p;
		while(s->Next!=NULL){
			s=s->Next; 
		}
		p->Prior=s;
		s->Next=p;
	}
	return p;
}

void Display(L p,int n){
	for(int i=0;i<n;i++){
		L t=p;
		printf("%d ",p->data);
		p=p->Next;
		free(t);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	L p;
	p=NULL;
	p=ListInsert(n);
	Display(p,n);
	return 0;
} 
