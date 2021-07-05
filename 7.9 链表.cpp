#include<stdio.h>
#include<stdlib.h> 
struct Node{
	char name[20];
	int no;
	struct Node *Next;
};

struct Node *Input(){
	struct Node *head=NULL;
	while(1){
	
		struct Node *newnode,*tainode;
		newnode=(struct Node*)malloc(sizeof(struct Node));
		newnode->Next=NULL;
		scanf("%s %d",newnode->name,&newnode->no);
		if(newnode->no==0){
			free(newnode);
			break;
		}
		if(head=NULL)
			head=newnode;
		else
			tainode->Next=newnode;
		tainode=newnode;
	}
	return head;
}
void Insert(struct Node *&head){
	struct Node *t=head;
	while(t->Next!=NULL){
		t=t->Next;
	}
	struct Node *newnode=NULL;
	newnode=(struct Node*)malloc(sizeof(struct Node));
	scanf("%s %d",newnode->name,&newnode->no);
	t->Next=newnode;
	t=newnode;
	t->Next=NULL;
	return ;
}
void Insertmid(struct Node*&head){
	struct Node *t=head;
}
int main(){
	int n;
	struct Node *head;
	scanf("%d",&n);
	return 0;
}
