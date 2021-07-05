#include<stdio.h>
#include<queue>
#include<string.h>
#include<iostream>
using namespace std;
bool maze[10][10],visit[10][10];
int st[10][10];
int a[5]={1,0,-1,0},b[5]={0,1,0,-1};
struct point{
	int step,x,y;
};
//������·�������·���� 
void print(int x,int y){
	if(x==0&&y==0)return ;
	for(int i=0;i<5;i++){
		if(st[x+a[i]][y+b[i]]==st[x][y]-1){//�ж��Ƿ����һ���Ǻϡ�	
			print(x+a[i],y+b[i]);
			printf("(%d, %d)\n",x+a[i]-1,y+b[i]-1);
		}
	}
}
//���п�������� 
void bfs(){
	memset(visit,0,sizeof(visit));//��ʼ��visit =0�� 
	memset(st,0,sizeof(st));//��ʼ��st= 0�� 
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			st[i][j]=999;//�������������С�� 
		}
	}
	queue<point>q;
	point s;
	s.step=1;//���� 
	s.x=s.y=1;
	q.push(s);//��� 
	visit[1][1]=1;
	st[1][1]=1;
	while(!q.empty()){//����ǿ�ʱ 
		point temp=q.front();//���ʶ��� 
		q.pop();//���� 
		if(temp.x==5&&temp.y==5){//�ж��Ƿ񵽴��յ㡣
			print(5,5);
			return ; 
		}
		for(int i=0;i<5;i++){
			point t=temp;//��� ��¼�Ƿ��߹� 
			t.x+=a[i];
			t.y+=b[i];//�������� 
			t.step=t.step+1;//������һ 
			if(visit[t.x][t.y]==0&&maze[t.x][t.y]==0){//�ж��Ƿ����ϰ���������߹� 
				q.push(t);//���� 
				visit[t.x][t.y]=1;//���߹���תΪ�ϰ��� 
				st[t.x][t.y]=t.step;
			}
		}
	}
}
int main(){
	memset(maze,1,sizeof(maze));//����������Ϊǽ����ֹ��� 
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			scanf("%d",&maze[i][j]);
		}
	}
	bfs();
	cout<<"(4, 4)"<<endl;
	return 0;
}
