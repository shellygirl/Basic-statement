#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ROW 3
#define COL 3
char g_chess_board[ROW][COL];//利用全局变量定义棋盘
//实现三子棋
//算法分析:
 void Init()
{
	//利用数组构建3X3的棋盘并将棋盘中的内容定义为空格:
	int row = 0;
	int col = 0;
	for (; row < ROW; row++)//实现行
	{
		for (; col < COL; col++)
		{
			g_chess_board[row][col] = ' ';//将每一行每一列的定义为空格
		}
	}
}
void PrintChessboard()
{
	//打印棋盘:
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
void PlayerMove()//玩家操作
{
	//1.请玩家输入一个坐标,
	//2.读取玩家输入的坐标,判断该坐标是否合法,并判断该坐标上是否已经有子;
	//3.若玩家坐标输入正确,将该坐标上的空格替换成字符'o'.
	int row = 0;
	int col = 0;
	printf("请玩家落子:\n");
	while (1)
	{
	scanf("%d %d", &row, &col);
	
		if (row >= ROW || row < 0 || col < 0 || col >= COL)
		{
			printf("输入错误!请重新输入:\n");
			continue;
		}
		if (g_chess_board[row][col] != ' '){
			printf("该处已有子!请重新输入:\n");
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
	//一.利用二维数组构建一个 3 X 3 棋盘,并将棋盘的每个格子定义为空格;
	//二.打印棋盘;
	PrintChessboard();
	//三.请用户输入一个坐标代表落子,将该坐标的空格替换为o来表示棋子的位置;并判断该坐标是否合法,
	//避免所有不合法输入
	//while (1)
	//{
	//	PlayerMove();
	//	winner = Judgement();
	//	if (winner != ' ')
	//	{
	//		printf("游戏结束");
	//		break;
	//	}
	//	if (winner == 'x')
	//	{
	//		printf("玩家胜利!\n");
	//	}
	//	else if (winner == 'o')
	//	{
	//		printf("电脑胜利!\n");
	//	}
	//	else if (winner == 'p')
	//	{
	//		printf("和棋!\n");
	//	}
	//	//四.请电脑输入一个坐标代表落子,将该坐标的空格替换为x,判断该坐标是否合法并避免不合法输入;
	//	ComputerMove();
	//	//五.每落子一次,判定一次胜负,输出该局的结果是x,o,g或者空格;
	//	winner = Judgement();
	//	if (winner != ' ')
	//	{
	//		break;
	//	}
	//}
	//	if (winner == 'x')
	//	{
	//		printf("玩家胜利!\n");
	//	}
	//	else if (winner == 'o')
	//	{
	//		printf("电脑胜利!\n");
	//	}
	//	else if (winner == 'p')
	//	{
	//		printf("和棋!\n");
	//	}
	//	//六.通过判断输出该局的结果是o还是x还是g或者空格,来判定该局的结果并输出;
		
	system("pause");
	return 0;

}
//指针的解引用:
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
	//int* p = &n;//将int类型变量n的地址赋值给地址类型的int变量 p 
	//*p = 0x55;//取出地址中的数字并修改为55;
	//printf("%x\n", n);
	//system("pause");
	//return 0;
//}