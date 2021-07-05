#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int Values[1000] = {0};
int Hopes[1000] = {0};
int  F[1001][101];
int max=0;
int Max(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}
int MFK(int n, int m) {
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++) {
			if (j < Values[i])
				F[i][j] = F[i - 1][j];
			else {
				F[i][j] = Max(F[i - 1][j], Hopes[i] + F[i - 1][j - Values[i]]);
			}
		}
	}
	return F[n][m];
}
void FindMess(int i,int j ,vector<int>&a) {
	while (i != 0 && j != 0) {
		if (F[i][j] > F[i - 1][j]) {
			a.push_back(i);
			j -= Values[i];
		}
		i -= 1;
	}
}
int main() {
	int m, n, values;
	vector<int>a;
	while (cin >> m >> n) {
		for (int i = 1; i <= n; i++) {
			cin >> Values[i] >> Hopes[i];
		}
		a.clear();
		memset(F, 0, sizeof(F));
		values=MFK(n,m);	
		FindMess(n, m, a);
		if (values == 0)
			cout << '0' << endl;
		else {
			cout << values<<endl;
			for (int i =a.size()-1; i >= 0; i--) {
				if(i==0)
					cout << a[i] ;
				else
				cout << a[i]<<' ' ;
			}
			cout << endl;
		}
		
	}
	return 0;
}
