//100-200֮��������ʵ�֣�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int Isprime(int x)
//{
//	int y = 2;
//	while (y * y < x)
//	{
//		if (x%y == 0)
//		{
//			return 0;
//		}
//		y++;
//	}
//	return 1;//��һ��������϶�������ǰһ������ʱ�ٷ���1.
//}
//int main()
//{
//	printf("100-200֮��������У�\n");
//	int i = 100;
//	while (i <= 200)
//	{
//		if (Isprime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	system("pause");
//	return 0;
//}
//�˷��ھ����ʵ��
//int mul(int x)
//{
//	int line = 1;
//	while (line <= x)
//
//	{
//		printf("%d * %d = %d ", line, x, line*x);
//		line++;
//	}
//
//}
//
//int main()
//{
//	printf("�˷��ھ���:\n");
//
//	int col = 1;
//	while (col < 10)
//	{
//		mul(col);
//		col++;
//		printf("\n");
//	}
//	system("pause");
//	return 0;
	/*}*///��һʱ�޷��ú������壬����������ѭ�����Ƕ�׶�����תΪ�������壻
	//1000-2000��֮������꣺
//int Leapyear(int x)
//{
//	if (x % 400 == 0)
//	{
//		return 1;
//	}
//	else if (x % 4 == 0)
//	{
//		if (x % 100 != 0)
//		{
//			return 1;
//		}
//	}
//	else //�˴���else�Ǳ�����ϵ�,�����Ĭ�Ͻ����ܱ�������������return 1;
//	{
//		return 0;
//	}
//	}
//int main()
//{
//	printf("1000-2000��֮��������У�\n");
//	int year = 1000;
//	while (year <= 2000)
//	{
//		if (Leapyear(year) == 1)
//			printf("%d ", year);
//		year++;
//	}
//	system ("pause");
//	return 0;
//}
//��������while���ʵ�ֱȽϲ���ӡʮ����֮�е����ֵ:
//int main()
//{
	//int arr[10] = { 23, 45, -2, 4, 333, 44, 5, 8, 0, 34, };
	//int max = arr[0];
	//int i=1;
	////while (i <= 9)
	////{
	////	if (arr[i] >= max)
	////	{
	////		max = arr[i];	//����:�����max����arr[i-1],���������һ����.
	////		//���:��������������ֻ��һ��ѭ����.һ��ѭ������������.
	////		//���,��ѭ���������һ����������һ���������Ƚ�,����һ��ѭ��������Ч��.
	////		//��Ҳ��Ϊʲô���ܽ���ѭ����Ҫ�õ��ı���ͳһ����������������,��Ҫע��,��for��佫�����Ķ������.//��������
	////	}
	////	i++;
	////}
	////��for���ʵ�����ֵ�ıȽ����:
	//for (;i<=9; i++)
	//if (arr[i] >= max)
	//	max = arr[i];
	//printf("%d\n", max);
	//system("pause");
	//return 0;
	//���������Ӵ�С����:
	//�㷨����:
	//���õ�һ���������е������бȽ�,��������������ǰ,
	//���õڶ�������ʣ�µ������бȽ�,�����������ڵڶ�λ,
	//�Դ�����,"ð�ݷ�".
//int compa(int x )
//{
//	int arr[10];
//	int max = arr[0];
//	x = 1;
//	while (x <= 10)
//	{
//		if (arr[x] > max)
//			max = arr[x];
//		x++;
//		printf("%d ", max);
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("������10������(�ÿո����): \n");
//	int arr[10];
//	for (i = 0; i < 10;i++)
//	scanf("%d ", &arr[i]);//ע��˴�ȡ��ַ����һ�Ŷ���(?),��Ҫ��ѭ�����һ��һ��ȡ��ַ.
//	//���ý�Ϊ�򵥵�for����������,�ٻ���while ���.
//	{
//		if (arr[j])
//
//	}
//}
//�������������Լ��:
int main(int x, int y)
{
	/*printf("��������������(�ÿո����):\n");
	int i = 1;
	int max = 1;
	scanf("%d %d", &x, &y);
	while(i <= x && i <= y)
	{
	if (x % i == 0 && y % i == 0)
	{
	max = i;
	}
	i++;
	}
	printf("���Լ��Ϊ:%d\n", max);*/
	/*int num = 0;
	printf("����һ������(1-7):");
	scanf("%d", &num);
	switch (num){
	case 1:
	printf("Monday\n");
	break;
	case 2:
	printf("Tusday\n");
	break;
	case 3:
	printf("Thirsday\n");
	break;
	case 4:
	printf("Wednesday\n");
	break;
	case 5:
	printf("Friday\n");
	break;
	case 6:
	printf("Saturday\n");
	break;
	case 7:
	printf("Sunday\n");
	break;
	default:
	printf("Illegal Immportation\n");
	break;
	}*/
	/*int num = 1;
	while (num <= 10)
	{
	printf("%d\n", num);

	if (num == 5)
	{
	break;
	}
	num++;*/

//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//	k++;
//	printf("hehe\n");
//}
	char[]=
	system("pause");
	return 0;
}
