#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

//С��Ϸɨ�׵�ʵ��:
// ɨ�׵���Ϸ����:��һ�������е����⼸�������ŵ���,���ⷭ��һ������,
//���ô��޵���,����ʾ���ڰ˸������в��е��׵���Ŀ,����ʾΪ 0�򷭿��ø��Ӻ󽫰˸�����ȫ������,ֱ����������0������Ϊֹ.
//����������,����Ϸ����,�������е�����ʾ����.
//ʵ���㷨����:
//һ.����һ��10 x 10 ������.
//��.�����̷�Ϊ��������,��ʵ����������ʾ����ҵ�����.:
//��ʵ������������Ϸ�Ľ���(��ҵĲ������ж���Ϸ�Ƿ����),��������ʾ�����̸���Ҵ�ӡ;
//��.������Ϸ����,
//��.�����жϺ���
#define ROW 9
#define COL 9
#define MINE_COUNT 80//�޶��׵ĸ���
char show_board[ROW + 2][COL + 2];
char real_board[ROW + 2][COL + 2];

//���� 10X10 ����,��������������״����Ϊ'1',��ȫ�����Ϊ'0'.
//����ʾ������Ϊ�Ǻ�

void Init(char real_board[ROW + 2][COL +2], char show_board[ROW + 2][COL + 2]){
	//1.��ʼ������
	memset(real_board, '0', (ROW + 2) * (COL + 2));
	memset(show_board, '*', (ROW + 2) * (COL + 2));
	//memset ����������������
	//2.������õ���
	int mine_count = MINE_COUNT;
	while( mine_count > 0){
		int row = rand() % 10 +1;
		int col = rand() % 10 +1;
		if (real_board[row][col] == '0'){
			real_board[row][col] == '1';
			mine_count--;
		}
	}
}
void DisplayMap(char show_board[ROW + 2][COL + 2])
{
	
	for (int row = 0; row < ROW + 1; row++){
		for (int col = 0; col < COL + 1; col++){
			if (row == 0 && col == 0)
			{
				printf("  ");
				continue;
			}
			if (row == 0){
				printf("%d ", col);
				continue;
			}
			if (col == 0){
				printf("%d ", row );
				continue;
			}
			printf("%c ", show_board[row][col]);
		}
		printf("\n");
	}
}
void Game()
	{
	//��ʼ��Ϸ:
	//��һ��:��ӡ�û������ĵ�ͼ
	Init(real_board, show_board);
	int row = 0;
	int col = 0;
	int not_mine_count = 0;
	while (1){
		DisplayMap(show_board);
		//�ڶ���:���û����뽫Ҫ����������:
		printf("������һ������:");
		//��ȡ�û������������
		
		scanf("%d %d", &row,&col);
		//������:�ж��û����������Ƿ�Ϸ�,�����зǷ�������Ԥ��
		if (row < 1 || row > 10 || col < 1 || col > 10){
			printf("�������벻�Ϸ�,����������:");
				continue;
		}
		//���Ĳ�:�ж��û�����������Ƿ����:
		if (real_board[row][col] == '1'){
			printf("���Ѳ���,��Ϸ����!");
			DisplayMap(real_board);
			break;
		}
		 //���Ѳ���, ����Ϸ��������ӡ������������
		if (real_board[row][col] == '0'){
			//��δ����,�򽫸����괦��ʾ���ڰ˸������в����׵�����
			int count = (real_board[row - 1][col - 1] - '0')
				+ (real_board[row - 1][col] - '0')
				+ (real_board[row - 1][col + 1] - '0')
				+ (real_board[row + 1][col + 1] - '0')
				+ (real_board[row + 1][col] - '0')
				+ (real_board[row + 1][col] - '0')
				+ (real_board[row][col + 1] - '0')
				+ (real_board[row][col - 1] - '0');
			show_board[row][col] = count;
			++not_mine_count;
			//���岽:�ж������Ƿ�ȫ������
			if (not_mine_count == ROW * COL - MINE_COUNT){
				printf("��ϲ��ȡ��ʤ��!");
				DisplayMap(real_board);
				break;
			}
		}
	}
}
 GridOpen(int row ,int col){
//	int count = Cal(row,col);
//	if (count != 0 || row > ROW || col > COL){
//		show_board[row][col] = count;
//		return 1;
//	}
	
		//������ڰ˸����궼û����,���ô������ɿո�
		//show_board[row][col] = ' ';
		////�������˰˸�����,����������ʾΪ��ĸ��Ӱ��ոù��ɷ���,ֱ���ҵ���Ϊ��ĸ���
		//return GridOpen(row + 1, col + 1);
		//�������õݹ����;
//}
void Start(){
	printf("******************************\n");
	printf("***********          *********\n");
	printf("*          1.��ʼ��Ϸ        *\n");
	printf("*          0.������Ϸ        *\n");
	printf("***********          *********\n");
	printf("******************************\n");
	printf("������ 0 �� 1 ѡ��ʼ���˳���Ϸ:");
	int a = -1;
	while (1){
		scanf("%d", &a);
		if (a > 1 || a < 0){
			printf("�������!����������:");
			continue;
		}
		if (a == 1)
		{
			Game();
		}
		if (a == 0){
			break;
		}
	}
}
int main(){
	Start();
	system("pause");
	return 0;
}
