#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ROW 3
#define COL 3
char g_chess_board[ROW][COL];//����ȫ�ֱ�����������
//ʵ��������
//�㷨����:
 void Init()
{
	//�������鹹��3X3�����̲��������е����ݶ���Ϊ�ո�:
	int row = 0;
	int col = 0;
	for (; row < ROW; row++)//ʵ����
	{
		for (; col < COL; col++)
		{
			g_chess_board[row][col] = ' ';//��ÿһ��ÿһ�еĶ���Ϊ�ո�
		}
	}
}
void PrintChessboard()
{
	//��ӡ����:
	int row = 0;
	int col = 0;
	for (; row < ROW; row++)
	{
			printf("| %c | %c | %c |\n", g_chess_board[row][0],g_chess_board[row][1],g_chess_board[row][2]);
			if (row != ROW - 1)
			{
				printf("|---|---|---|\n");
			}
			
	}
}
void PlayerMove()//��Ҳ���
{
	//1.���������һ������,
	//2.��ȡ������������,�жϸ������Ƿ�Ϸ�,���жϸ��������Ƿ��Ѿ�����;
	//3.���������������ȷ,���������ϵĿո��滻���ַ�'o'.
	int row = 0;
	int col = 0;
	printf("���������:\n");
	while (1)
	{
	scanf("%d %d", &row, &col);
	
		if (row >= ROW || row < 0 || col < 0 || col >= COL)
		{
			printf("�������!����������:\n");
			continue;
		}
		if (g_chess_board[row][col] != ' '){
			printf("�ô�������!����������:\n");
			continue;
		}
		g_chess_board[row][col] == 'x';

	}

}
char Judgement()
{

}

int main()
{
	char winner = ' ';
	Init();
	//һ.���ö�ά���鹹��һ�� 3 X 3 ����,�������̵�ÿ�����Ӷ���Ϊ�ո�;
	//��.��ӡ����;
	PrintChessboard();
	//��.���û�����һ�������������,��������Ŀո��滻Ϊo����ʾ���ӵ�λ��;���жϸ������Ƿ�Ϸ�,
	//�������в��Ϸ�����
	//while (1)
	//{
	//	PlayerMove();
	//	winner = Judgement();
	//	if (winner != ' ')
	//	{
	//		printf("��Ϸ����");
	//		break;
	//	}
	//	if (winner == 'x')
	//	{
	//		printf("���ʤ��!\n");
	//	}
	//	else if (winner == 'o')
	//	{
	//		printf("����ʤ��!\n");
	//	}
	//	else if (winner == 'p')
	//	{
	//		printf("����!\n");
	//	}
	//	//��.���������һ�������������,��������Ŀո��滻Ϊx,�жϸ������Ƿ�Ϸ������ⲻ�Ϸ�����;
	//	ComputerMove();
	//	//��.ÿ����һ��,�ж�һ��ʤ��,����þֵĽ����x,o,g���߿ո�;
	//	winner = Judgement();
	//	if (winner != ' ')
	//	{
	//		break;
	//	}
	//}
	//	if (winner == 'x')
	//	{
	//		printf("���ʤ��!\n");
	//	}
	//	else if (winner == 'o')
	//	{
	//		printf("����ʤ��!\n");
	//	}
	//	else if (winner == 'p')
	//	{
	//		printf("����!\n");
	//	}
	//	//��.ͨ���ж�����þֵĽ����o����x����g���߿ո�,���ж��þֵĽ�������;
		
	system("pause");
	return 0;

}
//ָ��Ľ�����:
//int Find(int arr[], int size, int To_Find)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (arr[i] == )
//	}
//}
//int main()
//{
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int *p = arr;
//	printf("%d\n", p[2]);
//	printf("%d\n", *(p + 2));
	//int n = 0x11223344;
	//int* p = &n;//��int���ͱ���n�ĵ�ַ��ֵ����ַ���͵�int���� p 
	//*p = 0x55;//ȡ����ַ�е����ֲ��޸�Ϊ55;
	//printf("%x\n", n);
	//system("pause");
	//return 0;
//}