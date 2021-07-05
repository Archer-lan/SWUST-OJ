#include"iostream"
#include"stdio.h"
#include<string.h>
using namespace std;

typedef struct
{
	int price,charm;
}food;

int form[1005][100];

int getMax(int a,int b)
{
	return a>b?a:b;
}

int findMax(food *f,int m,int a)  //��Ʒ�� ����Ǯ������Ʒ���� 
{
	int max=0;
	for(int i=0;i<m;i++)
	{
		if(f[0].price>i+1)//   �����0����Ʒ�۸� ������Ǯ��i 
		{
			form[0][i] = 0;
		} 
		else
		{
			form[0][i] = f[0].charm;
		}
	}
	for(int i=1;i<a;i++)
	{
		for(int j=0;j<m;j++)   //j+1����ǰ��Ǯ 
		{
			if(j+1-f[i].price < 0) //����Ļ� �ͽ���һ�еĶ�Ӧcharm��ֵ����
			{
				form[i][j] = form[i-1][j];
			}
			else  //�������  f[i].price<=j+1
			{
				form[i][j] = getMax(form[i-1][j],(f[i].charm)+form[i-1][(j-f[i].price)]); 
			}
			if(max < form[i][j]){
				max = form[i][j];
			} 
		}
	} 
	return form[a-1][m-1];
	//return max;
}

int findpath(int *path,int m,int a,food *li)
{
	int num = 0;
	m--;
	a--;
	while(a>-1)   //RE ������m��Ϊ�ж� �������ѭ��Ϊmoney���ܲ��ử�� ���ܻ�ñȸպû����õ� charm��  
	{			//��Ϊ �����0 ����Ҫa>-1 ������while(a) 
		if(form[a][m] > form[a-1][m])
		{
			path[num++] = a+1;
			m -= li[a].price;
		}
		a--;
	}
	return num;
}

int main() 
{
	memset(form, 0, sizeof(form));		//����
	int money,amount;
	while(~scanf("%d %d",&money,&amount))
	{		
		food *f = new food[amount];
		for(int i=0;i<amount;i++)
		{
			cin >> f[i].price >> f[i].charm;
		}
		int value = findMax(f,money,amount);
		cout << value <<endl;
		int *path=new int[amount+1];
		int num = findpath(path,money,amount,f);
		for(int i=num-1;i>=0;i--)           
		{
			if (i > 0)
				cout << path[i] << " ";
			else
				cout << path[i] << endl;

		}
	}
	return 0;
}

