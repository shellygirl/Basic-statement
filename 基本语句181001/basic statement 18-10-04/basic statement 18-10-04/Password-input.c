#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//实现菱形的打印:
//分析菱形的规律:
//定义一个中间值n;
//第一行,七个空格,一个星号,第二行,六个空格三个星号,第三行,五个空格五个星号,第i行,n-i个空格2i - 1个星号;
void PrintLine(int cnt_blank, int cnt_star)//PrintLine 用于实现一行的打印
{
	int i = 0;
	for (; i < cnt_blank; i++)//
	{
		printf(" ");
	}
	for (i = 0; i < cnt_star; i++)
	{
		printf("*");
	}
	printf("\n");
}
void PrintfLingXing(int n)//PrintfLingXing函数用于实现行数的转换
{
	int i = 1;
	for (; i < n;i++)//当i < n-1时,打印上半部分:空格部分为中间值减行数,星号部分为行数乘以二减一
	{
		PrintLine(n - i, 2 * i - 1);
	}
	PrintLine(0, 2 * i - 1);//打印中间行:没有空格部分,星号部分不变
	for (i = n - 1; i > 0; i--)//此时行数等于中间值减一,行数开始递减,循环到行数为 1 时循环停止,
	{
		PrintLine(n - i, 2 * i - 1);//此时打印下半部分
	}

}
int main()
{
	PrintfLingXing(7);
	system("pause");
	return 0;
}
//实现n的阶乘:
//int Factor(int x)
//{
//	int result = 1;
//	for (int i = 1; i <= x; i++)
//	{
//		result *= i;//"*=" means:result = result * i;
//	}
//	return result;
//}
//int SumFactor(int y)
//{
//	int result = 0;
//	int i = 1;
//	for (i = 1; i <= y; i++)
//	{
//		result += Factor(i);
//	}
//	return result;
//}
//int main()
//
//{
//	//阶乘的求和:
//	int result = 0;
//	int i = 1;
//	printf("请输入一个整数:\n");
//	scanf("%d", &i);
//    result = SumFactor(i);//运用定义函数的方式将程序清晰化;
//	printf("%d\n", result);
//int main()
//{
//	printf("请输入密码:");
//	int tim = 0;
//	for (tim = 0; tim < 3; tim++)//当输入密码次数大于三则跳出循环
//	{
//		char Password[1024] = { 0 };
//		scanf_s("%s", Password);//无法输入内容,执行键后仅换行,原因不明.
//		if (strcmp(Password, "123456") == 0)
//		{
//			printf("登录成功!");
//			break;
//		}
//	}
//	if (tim == 3)
//	{
//		printf("密码错误三次!禁止登录!");
//	}
//	system("pause");
//	return 0;
//}
	//未知bug.
//int outline(int x)
//{
//
//	int line = 0;
//	for (line = 1; line <= x; line+=2)
//	{
//		printf("\n");
//	}
//	return x;
//}
//int main()
//{
//	char str[] = " ************ ";
//	int col = 0;
//	int i = strlen(str) - 1;
//	int line = 1;
//	for (; col <= outline(i);col++)
//	{
//		printf("%s", str[col]);
//	}
//
//int main()
//{
	//输入图案:
	//算法分析:该图案是由两部分组成:
	//1.从一个*以二为差值从左向右依次递增,直至输出全部*
	//2.输出全部*后再以二为差值从右向左依次递减,直至输出一个*.
	//在第一行打印第一个字符,第二行打印前三个字符,第三行打印前五个字符...直到打印出所有字符之后;
	//执行第二步,依次递减.
	//如何实现前n个字符串的打印?
	//在第一行打印str[1],在第二行打印1.2.3	
	//可知需要用到两个for语句的嵌套来实现
	//定义字符串的行数为line,该行字符串个数为col,定义字符串总数为sum.则当line=sum/2时,col的个数为sum,此刻开始执行递减程序
	//可知当line=1;col=1;line=2;col=3;
	//char str1[] = "************************";
	////char str2[] = "                        ";


	//int left = 1;
	//int right = strlen (str1)-1;
	//int i = 0;
	//for (; i <= right; i += 2)
	//{
	//	
	//	printf("%s", i);
//	//}
//	system("pause");
//		return 0;
//}
//实现猜数字项目:
//游戏步骤:
//1.系统随机产生一个1-100之间的数字,可用关键字
//void Game()
//{
//	int num = 0;
//	printf("请输入一个数字:");
//	int result = rand() % 100 + 1;//用rand实现随机整数的产生,与100取余可实现随机产生一个0-100之间的数字;
//	while (1)
//	{
//		scanf("%d", &num);//输入一个数字
//		if (num < result)//如果该数字小于随机值
//		{
//			printf("低了.\n");//提醒低了
//		}
//		else if (num >result)//如果该数字大于随机值
//		{
//			printf("高了.\n");//提醒高了
//		}
//		else//如果该数字等于随机值
//		{
//			printf("恭喜你答对了!\n");//提醒答对了
//			break;//并退出循环
//			//此处break未能实现,原因待调,当输入数字与随机值相符时依旧显示前一提示,而输入浮点数值时则变为死循环.
//			//再次实验,发现提醒"低了"与"高了"随机出现.例如连续多次输入同一数字时提醒会不相同.
//			//暂且怀疑rand语句被用到了判断上.
//			//具体情况有待调试.
//			//发现了问题= =将rand放在了while 语句内部,每循环一次随机值改变一次.
//		}
//	}	
//}
//int menu()//打印一个选择菜单
//{
//	int x = 0;
//	printf("********************\n");
//	printf("*    1.开始游戏    *\n");
//	printf("*    0.结束游戏    *\n");
//	printf("********************\n");
//	printf("请选择开始或结束(1 or 0):\n");
//	scanf("%d", &x);
//	return x;
//}
//
//	int main()
//			{
//			//1.第一步询问用户是否开始游戏,输入1则开始,输入0则跳出,输入其他数字则重新询问:
//			while (1)
//				{
//				int choi = menu();
//					if (choi == 1)//如果用户输入的数字为1,则游戏开始
//					{
//						Game();
//					}
//					else if (choi == 0)//如果为0,则跳出循环
//					{
//						break;
//					}
//					else//不为1也不为0则提醒输入有误
//					{
//						printf("您的输入有误!\n");
//					}
//				}
//			system("pause");
//			return 0;
//			}
  