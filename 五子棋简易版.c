#include <windows.h>

/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Caption",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		640, /* width */
		480, /* height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
 
 
#define MAXIMUS 20 //�������̴�С
 
 
int p[MAXIMUS][MAXIMUS];//�洢�Ծ���Ϣ
char buff[MAXIMUS*2+1][MAXIMUS*4+3];//���������
int Cx,Cy;//��ǰ���λ��
int Now;//��ǰ���ӵ���ң�1����ڣ�2�����
int wl,wp;//��ǰд�뻺����������������λ��
char* showText;//������������ʾ��������Ϣ
int count;//�غ���
 
 
char* Copy(char* strDest,const char* strSrc)//�޸Ĺ����ַ������ƺ����������ĩ�˵�\0
{
	char* strDestCopy = strDest;
	while (*strSrc!='\0')
	{
		*strDest++=*strSrc++;
	}
	return strDestCopy;
}
void Initialize()//��ʼ��һ���Ծֺ���
{
	int i,j;//ѭ������
	showText="";//������ʾ��Ϣ
	count=0;//�غ�������
	for(i=0;i<MAXIMUS;i++)//���öԾ�����
	{
		for(j=0;j<MAXIMUS;j++)
		{
			p[i][j]=0;
		}
	}
	Cx=Cy=MAXIMUS/2;//���ù�굽����
	Now=1;//���õ�ǰΪ�ڷ�
}
char* getStyle(int i,int j)//���������ָ�����꽻��λ�õ��ַ���ͨ���Ʊ��ƴ������
{
	if(p[i][j]==1)//1Ϊ����
		return "��";
	else if(p[i][j]==2)//2Ϊ����
		return "��";
	else if(i==0&&j==0)//����Ϊ��Ե������ʽ
		return "��";
	else if(i==MAXIMUS-1&&j==0)
		return "��";
	else if(i==MAXIMUS-1&&j==MAXIMUS-1)
		return "��";
	else if(i==0&&j==MAXIMUS-1)
		return "��";
	else if(i==0)
		return "��";
	else if(i==MAXIMUS-1)
		return "��";
	else if(j==0)
		return "��";
	else if(j==MAXIMUS-1)
		return "��";
	return "��";//�м�Ŀ�λ
}
char* getCurse(int i,int j){//���ָ�����꽻��λ�����ϸ����ʽ��ͨ���Ʊ����ģ�������ʾ
	if(i==Cx){
		if(j==Cy)
			return "��";
		else if (j==Cy+1)
			return "��";
	}
	else if(i==Cx+1)
	{
		if(j==Cy)
			return "��";
		else if (j==Cy+1)
			return "��";
	}
	return "��";//������ڹ�긽����Ϊ��
}
void write(char* c)//�򻺳���д���ַ���
{
	Copy(buff[wl]+wp,c);
	wp+=strlen(c);
}
void ln()//������д��λ������
{
	wl+=1;
	wp=0;
}
void Display()//�������������������Ļ
{
	int i,l=strlen(showText);//ѭ���������м�������Ϣ�ĳ���
	int Offset=MAXIMUS*2+2-l/2;//����м�������Ϣ������ʾ���ڵĺ�����λ��
	if(Offset%2==1)//���λ��Ϊ���������ƶ���ż�����������
	{
		Offset--;
	}
	Copy(buff[MAXIMUS]+Offset,showText);//���м�������Ϣ���Ƶ�������
	if(l%2==1)//����м����ֳ���Ϊ������������Ͽո񣬱������
	{
		*(buff[MAXIMUS]+Offset+l)=0x20;
	}
	system("cls");//������Ļ��׼��д��
	for(i=0;i<MAXIMUS*2+1;i++){//ѭ��д��ÿһ��
		printf("%s",buff[i]);
		if(i<MAXIMUS*2)//д����ÿһ����Ҫ����
			printf("\n");
	}
}
void Print()//������������������浽��������Ȼ�����Display������ʾ����
{
	int i,j;//ѭ������
	wl=0;
	wp=0;
	for(j=0;j<=MAXIMUS;j++)//д����������Ͻǵ��ַ�����Ϊ��Ҫ��ӡ�������½ǣ����Ժ��Ժ��ݸ���һ��ѭ��
	{
		for(i=0;i<=MAXIMUS;i++)
		{
			write(getCurse(i,j));//д�����Ͻ��ַ�
			if(j==0||j==MAXIMUS)//������������̱�Ե��û�����ӵ����ߣ��ÿո����λ��
			{
				if(i!=MAXIMUS)
					write("��");
			}
			else//����������м��������߳н�����
			{
				if(i==0||i==MAXIMUS-1)//���ұ�Ե�����߸���
					write("��");
				else if(i!=MAXIMUS)//�м������
					write("��");
			}
		}
		if(j==MAXIMUS)//��������һ��ѭ������ֻ��Ҫ����߲��ַ�������Ҫ��һ��
		{
			break;
		}
		ln();//���п�ʼ��ӡ��������
		write("��");//�ÿ�λ����λ��
		for(i=0;i<MAXIMUS;i++)//��������ѭ�������Ĵ���
		{
			write(getStyle(i,j));//д�뽻���ַ�
			if(i!=MAXIMUS-1)//����������Ҳ��򲹳�һ�����߳н�����
			{
				if(j==0||j==MAXIMUS-1)
				{
					write("��");//���±�Ե�ĺ��߸���
				}
				else
				{
					write("��");//�м�ĺ���
				}
			}
		}
		ln();//д��һ�к�����
	}
	Display();//�������������������Ļ
}
int Put(){//�ڵ�ǰ���λ�����ӣ�����ǿգ��򷵻�0��ʾʧ��
	if(p[Cx][Cy]==0)
	{
		p[Cx][Cy]=Now;//�ı��λ������
		return 1;//����1��ʾ�ɹ�
	}
	else
	{
		return 0;
	}
}
int Check()//ʤ����飬���жϵ�ǰ����λ����û���������������
{
	int w=1,x=1,y=1,z=1,i;//�ۼƺ�����б��а�ĸ������������ͬ������Ŀ
	for(i=1;i<5;i++)if(Cy+i<MAXIMUS&&p[Cx][Cy+i]==Now)w++;else break;//���¼��
	for(i=1;i<5;i++)if(Cy-i>0&&p[Cx][Cy-i]==Now)w++;else break;//���ϼ��
	if(w>=5)return Now;//�����ﵽ5�����жϵ�ǰ�������ΪӮ��
	for(i=1;i<5;i++)if(Cx+i<MAXIMUS&&p[Cx+i][Cy]==Now)x++;else break;//���Ҽ��
	for(i=1;i<5;i++)if(Cx-i>0&&p[Cx-i][Cy]==Now)x++;else break;//������
	if(x>=5)return Now;//�����ﵽ5�����жϵ�ǰ�������ΪӮ��
	for(i=1;i<5;i++)if(Cx+i<MAXIMUS&&Cy+i<MAXIMUS&&p[Cx+i][Cy+i]==Now)y++;else break;//�����¼��
	for(i=1;i<5;i++)if(Cx-i>0&&Cy-i>0&&p[Cx-i][Cy-i]==Now)y++;else break;//�����ϼ��
	if(y>=5)return Now;//�����ﵽ5�����жϵ�ǰ�������ΪӮ��
	for(i=1;i<5;i++)if(Cx+i<MAXIMUS&&Cy-i>0&&p[Cx+i][Cy-i]==Now)z++;else break;//�����ϼ��
	for(i=1;i<5;i++)if(Cx-i>0&&Cy+i<MAXIMUS&&p[Cx-i][Cy+i]==Now)z++;else break;//�����¼��
	if(z>=5)return Now;//�����ﵽ5�����жϵ�ǰ�������ΪӮ��
	return 0;//��û�м�鵽�����飬�򷵻�0��ʾ��û����Ҵ��ʤ��
}
int RunGame()//���������Ծ֣�����Ӯ����Ϣ(��Ȼ������)
{
	int input;//�������
	int victor;//Ӯ����Ϣ
	Initialize();//��ʼ���Ծ�
	while(1){//��ʼ���޻غϵ���ѭ����ֱ������ʤ������
		Print();//��ӡ����
		input=getch();//�ȴ����̰���һ���ַ�
		if(input==27)//�����ESC���˳�����
		{
			exit(0);
		}
		else if(input==0x20)//����ǿո���ʼ����
		{
			if(Put())//������ӳɹ����ж�ʤ��
			{
				victor=Check();
				Now=3-Now;//�ֻ���ǰ�������
				count++;
				if(victor==1)//����ڷ��ﵽʤ������ʾ��ʾ���ֲ��ȴ�һ�ΰ���������ʤ����Ϣ
				{
					showText="�ڷ������ʤ����";
					Print();
					if(getch()==0xE0)
					{
						getch();
					}
					return Now;
				}
				else if(victor==2)//����׷��ﵽʤ������ʾ��ʾ���ֲ��ȴ�һ�ΰ���������ʤ����Ϣ
				{
					showText="�׷������ʤ����";
					Display();
					if(getch()==0xE0)
					{
						getch();
					}
					return Now;
				}else if(count==MAXIMUS*MAXIMUS)//����غ����ﵽ�����������������̳�������Ϊƽ��
				{
					showText="ƽ�֣�";
					Display();
					if(getch()==0xE0)
					{
						getch();
					}
					return 0;
				}
			}
		}
		else if(input==0xE0)//������µ��Ƿ������������������룬��һ��Ϊ0xE0��ʾ���µ��ǿ��Ƽ�
		{
			input=getch();//��õڶ���������Ϣ
			switch(input)//�жϷ���������ƶ����λ��
			{
			case 0x4B://
				Cx--;
				break;
			case 0x48:
				Cy--;
				break;
			case 0x4D:
				Cx++;
				break;
			case 0x50:
				Cy++;
				break;
			}
			if(Cx<0)Cx=MAXIMUS-1;//������λ��Խ�����ƶ����Բ�
			if(Cy<0)Cy=MAXIMUS-1;
			if(Cx>MAXIMUS-1)Cx=0;
			if(Cy>MAXIMUS-1)Cy=0;
		}
	}
}
int main()//������
{
	system("title ���������� ����Etsnarl����");//���ñ���
	system("mode con cols=63 lines=32");//���ô��ڴ�С
	system("color E0");//������ɫ
	while(1){
		RunGame();
	}
	return 0;
}



