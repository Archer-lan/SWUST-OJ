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

	//low high 代表下标    max代表数值   sub记录未参与翻转的最大值坐标   count 记录反转次数 
	int low = 0, high = n - 1, max = -10000, sub, count = 0;
	while (high != 0) {
		max = -10000;
		for (int i = 0; i<=high; i++)
			if (max<a[i])
				max = a[i], sub = i;
		//如果最大值在底座则重新寻找最大值high-- 
		if (sub == high) {
			high--;
			continue;
		}

		//判断这个数是不是在第一位   如果不在反转两次  否则反转一次 
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
