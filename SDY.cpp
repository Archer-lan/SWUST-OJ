#include<stdio.h>
#include<malloc.h>
//LinkNode���͵������� 
typedef int ElemType;
typedef struct LNode
{	ElemType date;
	struct LNode *next;
}LinkNode;

//��ͷ�巨���������� 
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
//������Ա�
void DispList(LinkNode *L)
{	LinkNode *p=L->next;
	while(p!=NULL)
	{	printf("%d ",p->date);
		p=p->next;
	}
	printf("\n");
 } 
//������Ĳ������ 
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
//�������ɾ������
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
//������Ĳ��� 
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
//�жϵ������Ƿ�Ϊ��
bool ListEmpty(LinkNode *L)
{	if(L->next==NULL)
	return false;
	else
	return true; 
 } 
//������ 
int main()
{
	ElemType a[]={5,9,6,4,3,8,10};
	int n=7;
	LinkNode*head=0;
	CreateListF(head,a,n);//�������Ա� 
	DispList(head);//������Ա� 
	ListInsert(head,4,13);//��13���뵽��3�����֮��
	DispList(head);//������Ա� 
	ListDelete(head,6);//����5�����Ԫ��ɾ��
	DispList(head);//������Ա� 
	printf("%d\n",LocateElem(head,8));//����8���Ԫ��λ�� 
	printf("%d\n",ListEmpty(head));//�ж������Ƿ�Ϊ�� 
}
