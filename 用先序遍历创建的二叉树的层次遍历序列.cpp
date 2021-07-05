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
	struct BTNode *data[100];//储存二叉树节点的 数组队列 
	int front,rear;//前标记和后标记 
};
void PreOrder( struct BTNode *&p)//先序遍历创建二叉树 
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
	t->front=t->rear=-1;//初始化前后位置 
	t->data[++t->rear]=p;//头结点入队列 
	while(t->front!=t->rear) 
	{
		cout<<t->data[++t->front]->data;//输出当前标记位置的二叉树
		p=t->data[t->front] ;
		if(p->lchild!=NULL) t->data[++t->rear]=p->lchild;
		if(p->rchild!=NULL) t->data[++t->rear]=p->rchild;//若右孩子不为空，右孩子进队列 
	}
}
int main()
{
	struct BTNode *head;
	PreOrder(*&head);
	LevelOrder(head);
 } 
