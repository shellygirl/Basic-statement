#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//ģ����վ��¼����:��������ʱ���γ����򶳽�:
	//������Ҫ�˽�������������ַ�����������,����ʱ�õ�char.
	//�Լ��µĹؼ���strcmp:�Ƚ�ÿ���ַ���ASC��ֵ�Ƿ����,(�����ַ����ıȽϲ�����ֱ����==,)
	//�����ص�ֵС��0��˵���ַ����г�����ASC��С����ʵ������ַ�,return0��˵�������ַ�����ȫ���,��������...
	//"�ֵ���".
	int time = 0;
	for (; time < 3; time++)
	{
		printf("����������:\n");
		char Password[1024] = { 0 };
		scanf("%s", Password);
		if (strcmp(Password, "123456") == 0);//����˴����� == 0;���߼���������෴;
		{
			printf("��¼�ɹ�!\n");
			break;//�˴����ֲ�֪��bug,breakδ������.
		}
	}
	if (time == 3)
	{
		printf("�����������!��ֹ��¼!");
	}
	system("pause");
	return 0;

}
