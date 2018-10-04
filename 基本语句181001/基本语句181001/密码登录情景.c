#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	//模拟网站登录场景:输入密码时三次出错则冻结:
	//该题需要了解输入的密码是字符串而非数字,定义时用到char.
	//以及新的关键字strcmp:比较每个字符的ASC码值是否相等,(两个字符串的比较不可以直接用==,)
	//若返回的值小于0则说明字符串中出现了ASC码小于真实情况的字符,return0则说明两个字符串完全相等,大于零则...
	//"字典序".
	int time = 0;
	for (; time < 3; time++)
	{
		printf("请输入密码:\n");
		char Password[1024] = { 0 };
		scanf("%s", Password);
		if (strcmp(Password, "123456") == 0);//如果此处忘记 == 0;则逻辑结果正好相反;
		{
			printf("登录成功!\n");
			break;//此处出现不知名bug,break未能作用.
		}
	}
	if (time == 3)
	{
		printf("三次密码错误!禁止登录!");
	}
	system("pause");
	return 0;

}
