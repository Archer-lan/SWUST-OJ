#include<stdio.h>
#include<malloc.h>
//LinkNode类型的声明： 
typedef int ElemType;
typedef struct LNode
{	ElemType date;
	struct LNode *next;
}LinkNode;

//用头插法建立单链表 
void CreateListF(LinkNode *&L,ElemType a[],int n)
{	LinkNode *s;
	L=(LinkNode *)malloc(sizeof(LinkNode));
	L->next=NULL;
	for (int i=0;i<n;i++)
	{	s=(LinkNode *)malloc(sizeof(LinkNode));
		s->date=a[i];
		s->next=L->next;
		L->next=s;
	} 
}
//输出线性表
void DispList(LinkNode *L)
{	LinkNode *p=L->next;
	while(p!=NULL)
	{	printf("%d ",p->date);
		p=p->next;
	}
	printf("\n");
 } 
//单链表的插入操作 
bool ListInsert(LinkNode *&L,int i,ElemType e)
{	int j=0;
	LinkNode  *p=L,*s;
	if(i<=0) return  false;
	while (j<i-1&&p!=NULL)
	{	j++;
		p=p->next;
	}
	if(p==NULL)
	return false;
	else
	{	s=(LinkNode *)malloc(sizeof(LinkNode));
		s->date=e;
		s->next=p->next;
		p->next=s;
		return true;
	}
	
} 
//单链表的删除操作
bool  ListDelete(LinkNode *&L,int i)
{	int j=0;
	LinkNode *p=L,*q;
	if(i<=0) return false;
	while(j<i-1&&p!=NULL)
	{	j++;
		p=p->next;
	}
	if(p==NULL)
		return false;
	else
	{	q=p->next;
		if(q==NULL)
		return false;
		
		p->next=q->next;
		free(q);
		return true;
	}
 } 
//单链表的查找 
int LocateElem(LinkNode *L,ElemType e)
{	int i=1;
	LinkNode *p=L->next;
	while(p!=NULL&&p->date!=e)
	{	p=p->next;
		i++;
	}
	if(p==NULL)
	return 0;
	else
	return i;
 } 
//判断单链表是否为空
bool ListEmpty(LinkNode *L)
{	if(L->next==NULL)
	return false;
	else
	return true; 
 } 
//主函数 
int main()
{
	ElemType a[]={5,9,6,4,3,8,10};
	int n=7;
	LinkNode*head=0;
	CreateListF(head,a,n);//建立线性表 
	DispList(head);//输出线性表 
	ListInsert(head,4,13);//将13插入到第3个结点之后
	DispList(head);//输出线性表 
	ListDelete(head,6);//将第5个结点元素删除
	DispList(head);//输出线性表 
	printf("%d\n",LocateElem(head,8));//查找8这个元素位置 
	printf("%d\n",ListEmpty(head));//判断链表是否为空 
}
