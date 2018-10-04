#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
//	int time = 0;
//	for (time = 0; time < 3; time++)
//	{
//		char password[1024] = { 0 };
//		scanf("%s", password);//无法输入内容,执行键后仅换行,原因不明.
//		if (strcmp (password, "123456") == 0)
//		{
//			printf("登录成功!\n");
//			break;
//		}
//	}
//		if (time == 3)
//		{
//			printf("密码错误三次!禁止登录!");
//		}
	
	//未知bug.
int strout(int x)
{
	printf("%s", str1[left]);
	printf("\n");
}
int main()
{
	//输入图案:
	//算法分析:该图案是由两部分组成:
	//1.从一个*以二为差值从左向右依次递增,直至输出全部*
	//2.输出全部*后再以二为差值从右向左依次递减,直至输出一个*.
	//在第一行打印第一个字符,第二行打印前三个字符,第三行打印前五个字符...直到打印出所有字符之后;
	//执行第二步,依次递减.
	//如何实现前n个字符串的打印?
	//在第一行打印str[1],在第二行打印1.2.3	
	char str1[] = "************************";
	char str2[] = "                        ";


	int left = 1;
	int right = strlen (str1)-1;
	int i = 0;
	for (; i <= right; i += 2)
	{
		
		printf("%s", i);
	}
	system("pause");
		return 0;
}