//100-200之间素数的实现：
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
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
//	return 1;//当一轮运行完毕都不符合前一个条件时再返回1.
//}
//int main()
//{
//	printf("100-200之间的素数有：\n");
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
//乘法口诀表的实现
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
//	printf("乘法口诀表:\n");
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
	/*}*///若一时无法用函数定义，可先用两个循环语句嵌套而后再转为函数定义；
	//1000-2000年之间的闰年：
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
//	else //此处的else是必须加上的,否则会默认将不能被四整除的数字return 1;
//	{
//		return 0;
//	}
//	}
//int main()
//{
//	printf("1000-2000年之间的闰年有：\n");
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
//用数组与while语句实现比较并打印十个数之中的最大值:
//int main()
//{
	//int arr[10] = { 23, 45, -2, 4, 333, 44, 5, 8, 0, 34, };
	//int max = arr[0];
	//int i=1;
	////while (i <= 9)
	////{
	////	if (arr[i] >= max)
	////	{
	////		max = arr[i];	//存疑:如果将max换成arr[i-1],则会输出最后一个数.
	////		//解答:变量的生命周期只在一次循环内.一次循环过后则会更新.
	////		//因此,在循环语句中用一个变量与另一个变量作比较,在下一次循环中是无效的.
	////		//这也是为什么不能将该循环需要用到的变量统一定义在主函数区域,需要注意,而for语句将变量的定义简化了.//此条存疑
	////	}
	////	i++;
	////}
	////用for语句实现最大值的比较输出:
	//for (;i<=9; i++)
	//if (arr[i] >= max)
	//	max = arr[i];
	//printf("%d\n", max);
	//system("pause");
	//return 0;
	//将三个数从大到小排列:
	//算法分析:
	//先用第一个数与所有的数进行比较,将最大的数放在最前,
	//再用第二个数与剩下的数进行比较,将最大的数放在第二位,
	//以此类推,"冒泡法".
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
//	printf("请输入10个整数(用空格隔开): \n");
//	int arr[10];
//	for (i = 0; i < 10;i++)
//	scanf("%d ", &arr[i]);//注意此处取地址不能一概而论(?),需要用循环语句一个一个取地址.
//	//先用较为简单的for语句进行试验,再换成while 语句.
//	{
//		if (arr[j])
//
//	}
//}
//求两个数的最大公约数:
int main()
{
	/*printf("请输入两个整数(用空格隔开):\n");
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
	printf("最大公约数为:%d\n", max);*/
	/*int num = 0;
	printf("输入一个整数(1-7):");
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
	//char str1[] = "welcome to bit";
	//char str2[] = "**************";
	//printf("%s\n", str2);
	//int left = 0;
	//int right = strlen(str1) - 1; //字符串个数减一
	//while (left <= right)//当左边的字符串个数等于右边或右边的字符串覆盖了左边,则跳出循环
	//{
	//	str2[left] = str1[left];//每加一次将str1左边的字符串赋给str2
	//	str2[right] = str1[right];//每加一次将str1右边的字符串赋给str2
	//	printf("%s/\n", str2);//打印str2
	//	Sleep(100);//Sleep语句用来实现
	//	left++;
	//	right--;
	//}
	//用for语句实现该循环:
	/*for (; left <= right; left++, right--)
	{
	str2[left] = str1[left];
	str2[right] = str1[right];
	printf("%s\n", str2);
	Sleep(200);
	}*/
	//练习将三个数从大到小输出
	//算法分析:定义三个数,以及max,min
	//第一步比较前两个数,将较大的数赋给max,将较小的数赋给min
	//第二步将第三个数和max,min分别作比较,
	//如果第三个数大于max,则输出num3,max,min;如果第三个数小于min则输出max,min,num3;其他情况则输出max,num3,min
	//int num1 = 0;
	//int num2 = 0;
	//int num3 = 0;
	//printf("请输入三个整数(用空格隔开):");
	//scanf("%d %d %d", &num1, &num2, &num3);
	//int max = num1;
	//int min = num2;//max和min必须定义在输入指令之后
	//if (num1 <= num2)
	//{
	//	max = num2;
	//	min = num1;
	//}
	//if (num3 > max)
	//{
	//	printf("%d %d %d", num3, max, min);
	//}
	//if (num3 < min)
	//{
	//	printf("%d %d %d", max, min, num3);
	//}
	//   if (num3 <= max && num3 >= min)
	//{
	//	printf("%d %d %d ", max,num3, min);
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
	// printf("%s\n", a);//一个转义字符的错用而导致的错误.
	// Sleep(150);
	// left++;
	// right--;
	//}
	//练习题:将数组a中的内容与数组b中的内容进行交换
	//int a[] = { 1,2,3 };
	//int b[] = { 3,2,1 };
	////printf("请输入a组三个整数(用空格隔开):");
	////scanf("%d %d %d\n", &a[0],&a[1],&a[2]);
	////printf("请输入b组三个整数(用空格隔开):");
	//int N = sizeof(a)/sizeof(int);
	//printf("将两组数字调换顺序之后:\n");
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
	//bug:打印出的结果是交换之前的结果,原因未知.
//练习计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。 
double sum = 0;
int i = 1;
for (; i < 101; i++)
{
	if (i % 2 == 0)
	{
		sum += 1.0 / i;
	}
	else {
		sum -= 1.0 / i;
	}
}
  printf("%fl", sum);

	system("pause");
	return 0;

}