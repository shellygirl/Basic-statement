#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
//100-200֮��������ʵ�֣�
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
//	/*}*///��һʱ�޷��ú������壬����������ѭ�����Ƕ�׶�����תΪ�������壻
//	1000-2000��֮������꣺
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
//	int arr[10] = { 23, 45, -2, 4, 333, 44, 5, 8, 0, 34, };
//	int max = arr[0];
//	int i=1;
//	while (i <= 9)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];	//����:�����max����arr[i-1],���������һ����.
//			//���:��������������ֻ��һ��ѭ����.һ��ѭ������������.
//			//���,��ѭ���������һ����������һ���������Ƚ�,����һ��ѭ��������Ч��.
//			//��Ҳ��Ϊʲô���ܽ���ѭ����Ҫ�õ��ı���ͳһ����������������,��Ҫע��,��for��佫�����Ķ������.//��������
//		}
//		i++;
//	}
//	��for���ʵ�����ֵ�ıȽ����:
//	for (;i<=9; i++)
//	if (arr[i] >= max)
//		max = arr[i];
//	printf("%d\n", max);
//	system("pause");
//	return 0;
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
//int main()
//{
//	printf("��������������(�ÿո����):\n");
//	int i = 1;
//	int max = 1;
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	while (i <= x && i <= y)
//	{
//		if (x % i == 0 && y % i == 0)
//		{
//			max = i;
//		}
//		i++;
//	}
//	printf("���Լ��Ϊ:%d\n", max);
//	system("pause");
//	return 0;
//}
	/*int num = 0;
	printf("����һ������(1-7):");
	scanf("%d", &num);
	switch (num){
	case 1:
	printf("Monday\n");
	break;//break����ʡ��,������ܻ����ִ����һ�����.
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
	default://default������������������.
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
	//char str1[] = "welcome to bit";
	//char str2[] = "**************";
	//printf("%s\n", str2);
	//int left = 0;
	//int right = strlen(str1) - 1; //�ַ���������һ
	//while (left <= right)//����ߵ��ַ������������ұ߻��ұߵ��ַ������������,������ѭ��
	//{
	//	str2[left] = str1[left];//ÿ��һ�ν�str1��ߵ��ַ�������str2
	//	str2[right] = str1[right];//ÿ��һ�ν�str1�ұߵ��ַ�������str2
	//	printf("%s/\n", str2);//��ӡstr2
	//	Sleep(100);//Sleep�������ʵ��
	//	left++;
	//	right--;
	//}
	//��for���ʵ�ָ�ѭ��:
	/*for (; left <= right; left++, right--)
	{
	str2[left] = str1[left];
	str2[right] = str1[right];
	printf("%s\n", str2);
	Sleep(200);
	}*/
	/*��ϰ���������Ӵ�С���
	�㷨����:����������,�Լ�max,min
	��һ���Ƚ�ǰ������,���ϴ��������max,����С��������min
	�ڶ���������������max,min�ֱ����Ƚ�,
	���������������max,�����num3,max,min;�����������С��min�����max,min,num3;������������max,num3,min*/
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	printf("��������������(�ÿո����):");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	int max = num1;
//	int min = num2;//max��min���붨��������ָ��֮��
//	if (num1 <= num2)
//	{
//		max = num2;
//		min = num1;
//	}
//	if (num3 > max)
//	{
//		printf("%d %d %d", num3, max, min);
//	}
//	if (num3 < min)
//	{
//		printf("%d %d %d", max, min, num3);
//	}
//	if (num3 <= max && num3 >= min)
//	{
//		printf("%d %d %d ", max, num3, min);
//	}
//	system("pause");
//	return 0;
//}

	//char a[] = "i want to go to bilibili!";
	//char b[] = "*****no, you do not.*****";
	//printf("%s\n",a);
	//int left = 0;
	//int right = strlen(a)-1 ;
	//while (left <= right)
	//{
	// a[left] = b[left];
	// a[right] = b[right];
	// printf("%s\n", a);//һ��ת���ַ��Ĵ��ö����µĴ���.
	// Sleep(150);
	// left++;
	// right--;//�ǵ�right--,��++����γ�����ѭ��
	//}
	//��ϰ��:������a�е�����������b�е����ݽ��н���
	//int a[] = { 1,2,3 };
	//int b[] = { 3,2,1 };
	////printf("������a����������(�ÿո����):");
	////scanf("%3d\n", &a);
	////printf("������b����������(�ÿո����):");
	//int N = sizeof(a)/sizeof(a[0]);//��������ռ�Ĵ洢��Ԫ���ȳ���һ���洢��Ԫ���ȿ��Եõ��������Ԫ����Ŀ
	//printf("���������ֵ���˳��֮��:\n");
	//int i = 0;
	//for (i = 0; i < N; i++);
	//{
	//	int tmp = a[i];
	//	 a[i] = b[i];
	//	 b[i] = tmp;
	//}
	//for (i = 0; i < N; i++)
	//{
	//	printf("%d ", a[i]);
	//}
	//printf("\n");
	//for (i = 0; i < N; i++)
	//{
	//	printf("%d ", b[i]);
	//}
	//printf("\n");
	//����bug:��ӡ���Ľ���ǽ���֮ǰ�Ľ��,ԭ��δ֪.��Ҫ����
//��ϰ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ�� 
//double sum = 0;//sum�����ս��ΪС��,ע����double���ж���
//int i = 1;
//for (; i < 101; i++)
//{
//	if (i % 2 == 0)
//	{
//		sum += 1.0 / i;//c��������������������������,�����Ҫ��������ȷ��С�����.
//	}
//	else {
//		sum -= 1.0 / i;
//	}//sum+=1.0/i:ÿ��ѭ����sum����1.0/i.-=ͬ��.
//}
//  printf("%fl", sum);//��double��Ϊ����ʱ,����ĸ�ʽ��������%fl,���Ǹ�����%f
//ʵ��1-100֮������9���ֵĴ���:
//int calnine(int x)
//{
//	int count = 0;
//	if (x % 10 == 9)
//	{
//		++count;
//	}
//	if (x / 10 == 9)//�ǳ�����10����9Ŷ���ǳ���9����10,����Ǻ������޷����99,
//		//�˴��õ���c�������������������ὫС������ֱ��Ĩȥ�Ĺ���.
//	{
//		++count;//������ַ���������x,��count��һ
//	}
//	return count;//�˴��������,��return���÷���Ҫ�������.����:����count����˼�ǽ��������count
//	//(����һ��,��������return 1,2,3,���������������Ϊ100,200,300;������return 0,�����������Ϊ0)
//}
//int main()
//{
//	int count = 0;
//	int x = 0;
//	for (x = 0; x < 100; ++x)
//	{
//		count += calnine(x);//�˴���Ҫ����Ժ������õ���֪,�Լ�+=��-=�ĺ��弰�÷�
//	}
//	printf("1-100֮������9���ֵĸ���Ϊ:%d\n", count);
//int main()
//{
//	//ģ����վ��¼����:��������ʱ���γ����򶳽�:
//	//������Ҫ�˽�������������ַ�����������,����ʱ�õ�char.
//	//�Լ��µĹؼ���strcmp:�Ƚ�ÿ���ַ���ASC��ֵ�Ƿ����,(�����ַ����ıȽϲ�����ֱ����==,)
//	//�����ص�ֵС��0��˵���ַ����г�����ASC��С����ʵ������ַ�,return0��˵�������ַ�����ȫ���,��������...
//	//"�ֵ���".
//	int time = 0;
//	for (; time < 3; time++)
//	{
//		printf("����������:\n");
//		char Password[1024] = { 0 };
//		scanf("%s", Password);
//		if (strcmp(Password, "123456") == 0);//����˴����� == 0;���߼���������෴;
//		{
//			printf("��¼�ɹ�!\n");
//			break;//�˴����ֲ�֪��bug,breakδ������.
//		} 
//	}
//	if (time == 3)
//	{
//		printf("�����������!��ֹ��¼!");
//	}
//system("pause");
//	return 0;
//
//}
