#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ʵ�����εĴ�ӡ:
//�������εĹ���:
//����һ���м�ֵn;
//��һ��,�߸��ո�,һ���Ǻ�,�ڶ���,�����ո������Ǻ�,������,����ո�����Ǻ�,��i��,n-i���ո�2i - 1���Ǻ�;
void PrintLine(int cnt_blank, int cnt_star)//PrintLine ����ʵ��һ�еĴ�ӡ
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
void PrintfLingXing(int n)//PrintfLingXing��������ʵ��������ת��
{
	int i = 1;
	for (; i < n;i++)//��i < n-1ʱ,��ӡ�ϰ벿��:�ո񲿷�Ϊ�м�ֵ������,�ǺŲ���Ϊ�������Զ���һ
	{
		PrintLine(n - i, 2 * i - 1);
	}
	PrintLine(0, 2 * i - 1);//��ӡ�м���:û�пո񲿷�,�ǺŲ��ֲ���
	for (i = n - 1; i > 0; i--)//��ʱ���������м�ֵ��һ,������ʼ�ݼ�,ѭ��������Ϊ 1 ʱѭ��ֹͣ,
	{
		PrintLine(n - i, 2 * i - 1);//��ʱ��ӡ�°벿��
	}

}
int main()
{
	PrintfLingXing(7);
	system("pause");
	return 0;
}
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
//	int tim = 0;
//	for (tim = 0; tim < 3; tim++)//�������������������������ѭ��
//	{
//		char Password[1024] = { 0 };
//		scanf_s("%s", Password);//�޷���������,ִ�м��������,ԭ����.
//		if (strcmp(Password, "123456") == 0)
//		{
//			printf("��¼�ɹ�!");
//			break;
//		}
//	}
//	if (tim == 3)
//	{
//		printf("�����������!��ֹ��¼!");
//	}
//	system("pause");
//	return 0;
//}
	//δ֪bug.
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
	//����ͼ��:
	//�㷨����:��ͼ���������������:
	//1.��һ��*�Զ�Ϊ��ֵ�����������ε���,ֱ�����ȫ��*
	//2.���ȫ��*�����Զ�Ϊ��ֵ�����������εݼ�,ֱ�����һ��*.
	//�ڵ�һ�д�ӡ��һ���ַ�,�ڶ��д�ӡǰ�����ַ�,�����д�ӡǰ����ַ�...ֱ����ӡ�������ַ�֮��;
	//ִ�еڶ���,���εݼ�.
	//���ʵ��ǰn���ַ����Ĵ�ӡ?
	//�ڵ�һ�д�ӡstr[1],�ڵڶ��д�ӡ1.2.3	
	//��֪��Ҫ�õ�����for����Ƕ����ʵ��
	//�����ַ���������Ϊline,�����ַ�������Ϊcol,�����ַ�������Ϊsum.��line=sum/2ʱ,col�ĸ���Ϊsum,�˿̿�ʼִ�еݼ�����
	//��֪��line=1;col=1;line=2;col=3;
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
//ʵ�ֲ�������Ŀ:
//��Ϸ����:
//1.ϵͳ�������һ��1-100֮�������,���ùؼ���
//void Game()
//{
//	int num = 0;
//	printf("������һ������:");
//	int result = rand() % 100 + 1;//��randʵ����������Ĳ���,��100ȡ���ʵ���������һ��0-100֮�������;
//	while (1)
//	{
//		scanf("%d", &num);//����һ������
//		if (num < result)//���������С�����ֵ
//		{
//			printf("����.\n");//���ѵ���
//		}
//		else if (num >result)//��������ִ������ֵ
//		{
//			printf("����.\n");//���Ѹ���
//		}
//		else//��������ֵ������ֵ
//		{
//			printf("��ϲ������!\n");//���Ѵ����
//			break;//���˳�ѭ��
//			//�˴�breakδ��ʵ��,ԭ�����,���������������ֵ���ʱ������ʾǰһ��ʾ,�����븡����ֵʱ���Ϊ��ѭ��.
//			//�ٴ�ʵ��,��������"����"��"����"�������.���������������ͬһ����ʱ���ѻ᲻��ͬ.
//			//���һ���rand��䱻�õ����ж���.
//			//��������д�����.
//			//����������= =��rand������while ����ڲ�,ÿѭ��һ�����ֵ�ı�һ��.
//		}
//	}	
//}
//int menu()//��ӡһ��ѡ��˵�
//{
//	int x = 0;
//	printf("********************\n");
//	printf("*    1.��ʼ��Ϸ    *\n");
//	printf("*    0.������Ϸ    *\n");
//	printf("********************\n");
//	printf("��ѡ��ʼ�����(1 or 0):\n");
//	scanf("%d", &x);
//	return x;
//}
//
//	int main()
//			{
//			//1.��һ��ѯ���û��Ƿ�ʼ��Ϸ,����1��ʼ,����0������,������������������ѯ��:
//			while (1)
//				{
//				int choi = menu();
//					if (choi == 1)//����û����������Ϊ1,����Ϸ��ʼ
//					{
//						Game();
//					}
//					else if (choi == 0)//���Ϊ0,������ѭ��
//					{
//						break;
//					}
//					else//��Ϊ1Ҳ��Ϊ0��������������
//					{
//						printf("������������!\n");
//					}
//				}
//			system("pause");
//			return 0;
//			}
  