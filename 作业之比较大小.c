#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int da(int x, int y)
//
//{
//
//	if (x > y)
//
//		printf("%d\n", x);
//
//	else
//
//		printf("%d\n", y);
//
//
//
//
//
//
//int main()
//
//{
//
//	int a = 0;
//
//	int b = 0;
//
//
//
//
//
//	return 0;
//
//}

int bida(int x, int y)
{
	if (x>y)
		return x;
	else
		return y;
}

int main()
{
	
	int a = 0;
	int b = 0;

	//需要理清思路。这是一次计算，需要输入、计算、输出，三个步骤
	//输入多个量，需要用&分别在量前面，否则输入数字时会出bug

	//输入
	scanf("%d %d", &a, &b);

	//函数计算
	
	int sum = bida(a, b);

	//输出打印
	printf("%d", sum);

	return 0;
}