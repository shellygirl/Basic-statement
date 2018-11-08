#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

//小游戏扫雷的实现:
// 扫雷的游戏规则:在一个棋盘中的任意几处隐藏着地雷,随意翻开一个格子,
//若该处无地雷,则显示相邻八个格子中藏有地雷的数目,若显示为 0则翻开该格子后将八个格子全部翻开,直到翻开大于0的数字为止.
//若翻开地雷,则游戏结束,并将所有地雷显示出来.
//实现算法分析:
//一.构建一个10 x 10 的棋盘.
//二.将棋盘分为两个部分,真实的棋盘与显示给玩家的棋盘.:
//真实的棋盘用于游戏的进行(玩家的操作及判断游戏是否结束),将用于显示的棋盘给玩家打印;
//三.构建游戏主体,
//四.构建判断函数
#define ROW 9
#define COL 9
#define MINE_COUNT 80//限定雷的个数
char show_board[ROW + 2][COL + 2];
char real_board[ROW + 2][COL + 2];

//构建 10X10 雷阵,将真正的雷阵藏雷处标记为'1',安全区标记为'0'.
//将显示雷阵设为星号

void Init(char real_board[ROW + 2][COL +2], char show_board[ROW + 2][COL + 2]){
	//1.初始化雷阵
	memset(real_board, '0', (ROW + 2) * (COL + 2));
	memset(show_board, '*', (ROW + 2) * (COL + 2));
	//memset 语句可用于设置棋盘
	//2.随机放置地雷
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
	//开始游戏:
	//第一步:打印用户所见的地图
	Init(real_board, show_board);
	int row = 0;
	int col = 0;
	int not_mine_count = 0;
	while (1){
		DisplayMap(show_board);
		//第二步:请用户输入将要翻开的坐标:
		printf("请输入一个坐标:");
		//读取用户所输入的坐标
		
		scanf("%d %d", &row,&col);
		//第三步:判断用户所属坐标是否合法,并进行非法操作的预防
		if (row < 1 || row > 10 || col < 1 || col > 10){
			printf("您的输入不合法,请重新输入:");
				continue;
		}
		//第四步:判断用户输入的坐标是否藏雷:
		if (real_board[row][col] == '1'){
			printf("您已踩雷,游戏结束!");
			DisplayMap(real_board);
			break;
		}
		 //若已踩雷, 则游戏结束并打印出真正的雷阵
		if (real_board[row][col] == '0'){
			//若未踩雷,则将该坐标处显示相邻八个坐标中藏有雷的数量
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
			//第五步:判断雷阵是否全部翻开
			if (not_mine_count == ROW * COL - MINE_COUNT){
				printf("恭喜您取得胜利!");
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
	
		//如果相邻八个坐标都没有雷,将该处坐标变成空格
		//show_board[row][col] = ' ';
		////并翻开此八个格子,并将所有显示为零的格子按照该规律翻开,直至找到不为零的格子
		//return GridOpen(row + 1, col + 1);
		//试着运用递归调用;
//}
void Start(){
	printf("******************************\n");
	printf("***********          *********\n");
	printf("*          1.开始游戏        *\n");
	printf("*          0.结束游戏        *\n");
	printf("***********          *********\n");
	printf("******************************\n");
	printf("请输入 0 或 1 选择开始或退出游戏:");
	int a = -1;
	while (1){
		scanf("%d", &a);
		if (a > 1 || a < 0){
			printf("输入错误!请重新输入:");
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
