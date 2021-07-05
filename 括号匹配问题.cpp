#include<stdio.h>
#include<stdlib.h>
typedef struct Node *Ptr;
struct Node{
	char data;
	Ptr Next;
};
typedef Ptr L;

void Push(struct Node *&p,char data){
	L t=(L)malloc(sizeof(struct Node));
	t->data=data;
	t->Next=p;
	p=t;
	return ;
}

void Pop(struct Node *&p){
	L t=p;
	p=p->Next;
	free(t);
}

char Get_top(struct Node *&p){
	if(p==NULL) return '\0';
	char data=p->data;
	Pop(p);
	return data;
}

int main(){
	L p=NULL;
	char c;
	c=getchar();
	int flag = 1;
	while(c!='\n'){
		switch (c){
			case '[':Push(p,'[');break;
			case ']':if(Get_top(p)!='[') flag=0;
					break;
			case '(':Push(p,'(');break;
			case ')':if(Get_top(p)!='(') flag=0;
					break;
		}
		c=getchar();
	}
	if(flag==0) printf("NO");
	else printf("YES");
	return 0;
} 
