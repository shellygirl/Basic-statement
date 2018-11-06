#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ROW 3
#define COL 3
//С��Ϸɨ�׵�ʵ��:
//һ. ɨ�׵���Ϸ����:��һ�������е����⼸�������ŵ���,���ⷭ��һ������,
//���ô��޵���,����ʾ���ڰ˸������в��е��׵���Ŀ,����ʾΪ 0�򷭿��ø��Ӻ󽫰˸�����ȫ������,ֱ����������0������Ϊֹ.
//����������,����Ϸ����,�������е�����ʾ����.
//ʵ���㷨����:
//һ.����һ��10 x 10 ������.
//��.�����̷�Ϊ��������,��ʵ����������ʾ����ҵ�����.:
//��ʵ������������Ϸ�Ľ���(��ҵĲ������ж���Ϸ�Ƿ����),��������ʾ�����̸���Ҵ�ӡ;
//��.������Ϸ����,
//��.�����жϺ���

char g_chess_board[ROW][COL];//����ȫ�ֱ�����������
//ʵ��������
//�㷨����:
 void Init()
{
	//�������鹹��3X3�����̲��������е����ݶ���Ϊ�ո�:
	int row = 0;
	int col = 0;
	for (row = 0; row < ROW; row++)//ʵ����
	{
		for (col = 0; col < COL; col++)
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
	for (row = 0; row < ROW; row++)
	{
			printf("| %c | %c | %c |\n", g_chess_board[row][0],
				   g_chess_board[row][1],g_chess_board[row][2]);
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
	int row = -1;
	int col = -1;
	printf("���������(�����������(����0 - 2)���ÿո����):");
	while (1){
			scanf("%d %d", &row, &col);
			if (row >= ROW || row < 0 || col < 0 || col >= COL)
			{
				printf("�������!����������:");
				continue;
			}
			if (g_chess_board[row][col] != ' '){
				printf("�ô�������!����������:");
				continue;
			}
			g_chess_board[row][col] = 'x';
			break;
	}

}
void ComputerMove(){//�����������������������\˼����������Ӹ�������
	int row = -1;
	int col = -1;
	printf("���������:\n");
	while (1){
		row = rand() % ROW;
		col = rand() % COL;
		if (g_chess_board[row][col] == ' ')
		{
			g_chess_board[row][col] = 'o';
			break;
		}
	}
}
char Judgement()//�ж���Ϸ�Ƿ����ʤ��
{
	//1.�ж��Ƿ�������������һ��:����,����,�Խ���
	for (int row = 0; row < ROW; row++){

		if (g_chess_board[row][0] == g_chess_board[row][1] &&
			g_chess_board[row][0] == g_chess_board[row][2] &&
			g_chess_board[row][0] != ' '){
			return g_chess_board[row][0];
		}

	}//���ÿ���Ƿ���������ַ���ͬ�����,���򷵻ظô��ַ�
	for (int col = 0; col < COL; col++)
	{
		if (g_chess_board[0][col] == g_chess_board[1][col] &&
			g_chess_board[0][col] == g_chess_board[2][col] &&
			g_chess_board[0][col] != ' ')
		{
			return g_chess_board[0][col];
		}
	}//���ÿ���Ƿ�������ַ�����,���򷵻ظô��ַ�
	if (g_chess_board[0][0] == g_chess_board[1][1] &&
		g_chess_board[0][0] == g_chess_board[2][2] &&
		g_chess_board[0][0] != ' '){
		return g_chess_board[0][0];
	}
	if (g_chess_board[0][2] == g_chess_board[1][1] &&
		g_chess_board[0][2] == g_chess_board[2][0] &&
		g_chess_board[0][2] != ' '){
		return g_chess_board[0][2];
	}//���Խ����Ƿ�������ַ�����,���򷵻ظô��ַ�
	if (IsFull()){
		return 'p';//����Ƿ����,���򷵻� p
	}
	return ' ';//ȫ���񶨷��ؿո�
}
int IsFull(){
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_chess_board[row][col] == ' '){
				return 0;//������ֿո��򷵻� 0 ��ʾ�Ǻ���
			}
		}
	}return 1;
}


int ChessPlay()
{
	char winner = ' ';
	Init();
	//һ.���ö�ά���鹹��һ�� 3 X 3 ����,�������̵�ÿ�����Ӷ���Ϊ�ո�;
	//��.��ӡ����;
	PrintChessboard();
	//��.���û�����һ�������������,��������Ŀո��滻Ϊo����ʾ���ӵ�λ��;���жϸ������Ƿ�Ϸ�,
	//�������в��Ϸ�����
	while (1)
	{
		PlayerMove();
		winner = Judgement();
		if (winner != ' ')
		{
			printf("��Ϸ����!");
			if (winner == 'x')
			{
				printf("���ʤ��!\n");
			}
			else if (winner == 'o')
			{
				printf("����ʤ��!\n");
			}
			else if (winner == 'p')
			{
				printf("����!\n");
			}
			PrintChessboard();
			break;
		}
		PrintChessboard();
		//��.���������һ�������������,��������Ŀո��滻Ϊx,�жϸ������Ƿ�Ϸ������ⲻ�Ϸ�����;
		ComputerMove();
		//��.ÿ����һ��,�ж�һ��ʤ��,����þֵĽ����x,o,g���߿ո�;
		winner = Judgement();
		if (winner != ' ')
		{
			printf("��Ϸ����!");
			if (winner == 'x')
			{
				printf("���ʤ��!\n");
			}
			else if (winner == 'o')
			{
				printf("����ʤ��!\n");
			}
			else if (winner == 'p')
			{
				printf("����!\n");
			}
			PrintChessboard();
			break;
		}
		PrintChessboard();
		//��.ͨ���ж�����þֵĽ����o����x����g���߿ո�,���ж��þֵĽ�������;
	}
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