#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ʵ��n�Ľ׳�:
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
//	//�׳˵����:
//	int result = 0;
//	int i = 1;
//	printf("������һ������:\n");
//	scanf("%d", &i);
//    result = SumFactor(i);//���ö��庯���ķ�ʽ������������;
//	printf("%d\n", result);
//int main()
//{
//	printf("����������:");
//	int time = 0;
//	for (time = 0; time < 3; time++)
//	{
//		char password[1024] = { 0 };
//		scanf("%s", password);//�޷���������,ִ�м��������,ԭ����.
//		if (strcmp (password, "123456") == 0)
//		{
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//	}
//		if (time == 3)
//		{
//			printf("�����������!��ֹ��¼!");
//		}
	
	//δ֪bug.
int strout(int x)
{
	printf("%s", str1[left]);
	printf("\n");
}
int main()
{
	//����ͼ��:
	//�㷨����:��ͼ���������������:
	//1.��һ��*�Զ�Ϊ��ֵ�����������ε���,ֱ�����ȫ��*
	//2.���ȫ��*�����Զ�Ϊ��ֵ�����������εݼ�,ֱ�����һ��*.
	//�ڵ�һ�д�ӡ��һ���ַ�,�ڶ��д�ӡǰ�����ַ�,�����д�ӡǰ����ַ�...ֱ����ӡ�������ַ�֮��;
	//ִ�еڶ���,���εݼ�.
	//���ʵ��ǰn���ַ����Ĵ�ӡ?
	//�ڵ�һ�д�ӡstr[1],�ڵڶ��д�ӡ1.2.3	
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