#include<iostream> 
#include<stdio.h> 
#include<malloc.h>
#include<string.h>
#include<string>
#include<math.h>
using namespace std;

void change(int a[], int low, int high) {
	for (int i = low, j = high; i <= j; i++, j--)
		swap(a[i], a[j]);
}

int main() {
	int n;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i<n; i++)
		cin >> a[i];

	//low high �����±�    max������ֵ   sub��¼δ���뷭ת�����ֵ����   count ��¼��ת���� 
	int low = 0, high = n - 1, max = -10000, sub, count = 0;
	while (high != 0) {
		max = -10000;
		for (int i = 0; i<=high; i++)
			if (max<a[i])
				max = a[i], sub = i;
		//������ֵ�ڵ���������Ѱ�����ֵhigh-- 
		if (sub == high) {
			high--;
			continue;
		}

		//�ж�������ǲ����ڵ�һλ   ������ڷ�ת����  ����תһ�� 
		if (sub != 0) {
			change(a, 0, sub);
			change(a, 0, high);
			count++;
		}
		else
			change(a, 0, high);
		high--, count++;
	}
	cout << count << endl;
	return 0;
}
