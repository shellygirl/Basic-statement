//100-200֮��������ʵ�֣�

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
	return 1;//��һ��������϶�������ǰһ������ʱ�ٷ���1.
}
int main()
{
	printf("100-200֮��������У�\n");
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