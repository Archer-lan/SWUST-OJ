#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<cstdlib>
#include<algorithm>
#include<iostream>
const int N = 100005;
struct nodata1
{
	int address;
	int data;
	int next;
}a[N],*b[N];
using namespace std;
int main()
{
	int i, j,n,k,head,address,next,data;
	scanf("%d %d %d", &head, &n, &k);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &address, &data, &next);
		a[address].address = address;
		a[address].data = data;
		a[address].next = next;
	}
	j = 0;
	for (i = head; i != -1; i = a[i].next)//���a��ָ��
		b[j++] = &a[i];
	for (i = 0; i <= j-k; i += k) //��ת��<= ������k = j = 4,ҲӦ�÷�תһ�Ρ�
		reverse(b + i, b + i + k);
	for (i=0;i<j;i++)
	{
		if (i != j - 1)//����Ҫ�����һ��Ԫ�ص�λ�ã������һ����ʱ���е����⣬���Զ���b[i+1]->address��Ҫ�ж�һ�������
			printf("%05d %d %05d\n", b[i]->address, b[i]->data, b[i+1]->address);
		else
			printf("%05d %d -1\n", b[i]->address, b[i]->data);
	}
		return 0;
}
