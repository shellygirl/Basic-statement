//100-200之间素数的实现：

#include<stdio.h>
#include<stdlib.h>
int Isprime(int x)
{
	int y = 2;
	while (y * y < x)
	{
		if (x%y == 0)
		{
			return 0;
		}
		y++;
	}
	return 1;//当一轮运行完毕都不符合前一个条件时再返回1.
}
int main()
{
	printf("100-200之间的素数有：\n");
	int i = 100;
	while (i <= 200)
	{
		if (Isprime(i) == 1)
		{
			printf("%d ", i);
		}
		i++;
	}
	system("pause");
	return 0;
}