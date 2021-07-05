#include<stdio.h>
#include<iostream>
#include<malloc.h>
using namespace std;
struct BTNode
{
	char data;
	struct BTNode *lchild;
	struct BTNode *rchild;
}; 
struct SqQueue
{
	struct BTNode *data[100];//����������ڵ�� ������� 
	int front,rear;//ǰ��Ǻͺ��� 
};
void PreOrder( struct BTNode *&p)//����������������� 
{
	char a;
	cin>>a;
	if(a=='#') p=NULL;
	else
	{
		p=(struct BTNode *)malloc(sizeof(struct BTNode));
		p->data=a;
		PreOrder(p->lchild);
		PreOrder(p->rchild);
	}	
}
void LevelOrder(struct BTNode *p)
{
	struct SqQueue *t;
	t=(struct SqQueue *)malloc(sizeof(struct SqQueue));
	t->front=t->rear=-1;//��ʼ��ǰ��λ�� 
	t->data[++t->rear]=p;//ͷ�������� 
	while(t->front!=t->rear) 
	{
		cout<<t->data[++t->front]->data;//�����ǰ���λ�õĶ�����
		p=t->data[t->front] ;
		if(p->lchild!=NULL) t->data[++t->rear]=p->lchild;
		if(p->rchild!=NULL) t->data[++t->rear]=p->rchild;//���Һ��Ӳ�Ϊ�գ��Һ��ӽ����� 
	}
}
int main()
{
	struct BTNode *head;
	PreOrder(*&head);
	LevelOrder(head);
 } 
