#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define NUM_RATES sizeof(input)/sizeof(input[0])
int main(){
	//找出用户输入的最大数:
	int input[] = { 0 };
	int max = 0;
	printf("Please input the numbers:");
	int i = 0;
	for (; i < NUM_RATES; i++)
	{
		scanf("%d", &input[i]);
	}
	for (int i = 0; i < NUM_RATES; i++){
		if (max < input[i]){
			max = input[i];
			printf("The greatest number is :%d ", input[i]);
		}

	}
	system("pause");
	return 0;
}