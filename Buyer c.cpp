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

int findMax(food *f,int m,int a)  //物品表 ，总钱数，物品数量 
{
	int max=0;
	for(int i=0;i<m;i++)
	{
		if(f[0].price>i+1)//   如果第0个物品价格 大于总钱数i 
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
		for(int j=0;j<m;j++)   //j+1代表当前的钱 
		{
			if(j+1-f[i].price < 0) //买不起的话 就将上一行的对应charm赋值给它
			{
				form[i][j] = form[i-1][j];
			}
			else  //能买得起  f[i].price<=j+1
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
	while(a>-1)   //RE 不能用m作为判断 会造成死循环为money可能不会画完 就能获得比刚好花完获得的 charm高  
	{			//因为 最低是0 所以要a>-1 不能用while(a) 
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
	memset(form, 0, sizeof(form));		//置零
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

