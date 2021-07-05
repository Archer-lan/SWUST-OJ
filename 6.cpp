#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
typedef struct LNode {
	int data;
	struct LNode* next;
}List;
void CreatList(List*& L, int a[], int n)
{
	List* r, * s;
	int i;
	L = (List*)malloc(sizeof(List));
	r = L;
	for (i = 0; i < n; i++)
	{
		s = (List*)malloc(sizeof(List));
		s->data = a[i];
		r->next = s;
		r = s;
	}
	r->next = NULL;
}
void InlitList(List*& L)
{
	L = (List*)malloc(sizeof(List));
	L->next = NULL;
}
void DestroyList(List*& L)
{
	List* pre = L, * p = L->next;
	while (p != NULL)
	{
		free(pre);
		pre = p;
		p = pre->next;
	}
	free(pre);
}
void DispList(List* L)
{
	List* p = L->next;
	while (p != NULL)
	{
		cout << p->data<<' ';
		p = p->next;
	}
}
List * Connect(List*& A, List*& B)
{
	List* p = A;
	while (p->next)
	{
		p = p->next;
	}
	p->next= B->next;
	return A;
}
int main()
{
	int n,m;
	int a[1000],b[1000];
	List* A=NULL, * B=NULL;
	InlitList(A);
	InlitList(B);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> m;
	for (int j = 0; j < m; j++)
	{
		cin >> b[j];
	}
	CreatList(A,a,n);
	CreatList(B,b,m);
	A=Connect(A, B);
	DispList(A);
	return 0;
}
