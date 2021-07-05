#include<stdio.h>
#include<stdlib.h>
struct student{
	char ID[20];
	char name[20];
	float score;
	struct student *next;
};
int n;
struct student *creat(){
	struct student *head,*p1,*p2;
	n=0;
	p1=p2=(struct student*)malloc(sizeof(struct student));
	scanf("%s %s %f",p1->ID,p1->name,p1->score);
	head=NULL;
	while(p1->ID!=0&&p1->name!=0&&p1->score!=0){
		n++;
		if(n==1)
			head=p1;
		else
			p2->next=p1;
		p2=p1;
		p1=(struct student*)malloc(sizeof(struct student));
		scanf("%s %s %f",p1->ID,p1->name,p1->score);
	}
	p2->next=NULL;
	return head;
}
void printf(struct student *head){
	struct student *p;
	p=head;
	if(head!=NULL){
		while(p!=NULL){
			printf("%s %s %g\n",p->ID,p->name,p->score);
			p=p->next;
		}
	}
}
int main(){
	struct student *head;
	head=creat();
	printf(head);
	return 0;
}
