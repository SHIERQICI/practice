
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用（数据），后运算（++），
//	//也就等于int b = a;a = a + 1;//所以结果上，b=a=10;a=a+1=11
//
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，先运算（++），后使用（数据）
//	//相当于int a=a+1=10+1=11;b=a=11//所以结果上a=11;b=11
//
//	printf("%d\n", a);//11
//	printf("%d\n", b);//11
//
//
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a--;//后置--，先使用，后计算
//	//原式=：int b=a=10;a=a-1=9//所以a=9;b=10
//
//	printf("%d\n", a);//9
//	printf("%d\n", b);//10
//
//
//
//
//	return 0;
//}

//int main()
//{
//	int a =10;
//	int b = --a;//前置--，先运算（--），后使用（数据）
//	
//	printf("%d\n", a);//9
//	printf("%d\n", b);//9
//
//
//
//	return 0;
//}


//int main()
//{
//	/*int a = 3.14;*///警报提示：“初始化”: 从“double”转换到“int”，可能丢失数据
//
//	int b = (int)3.14;//不报错，因为被强制转换了数据类型。
//
//
//
//	return 0;
//}


//以上为“单目操作符”学习内容。

//int main()
//{
//	int a = 10;
//
//	if (a = 3)//这里的“=”作用是“赋值”，而非“判断相等”
//	{
//		printf("good");
//
//	}
//
//	int b = 10;
//	if (b == 3)//这里的“==”是“判断相等”，因为b=10≠3，所以无法打印出“well”
//	{
//		printf("well");
//
//	}
//
//
//	return 0;
//}

//这部分为关系操作符

//下一部分为逻辑操作符

int main()
{
	//”&&“表示“逻辑-与”，即俗语“并且”
	//“||”表示“逻辑-或”，即俗语“或者”

	int d = 10;
	int e = 20;

	if (d && e)//当c并且d都为“真”的时候
	{
		printf("good\n");
	}
	int a = 10;
	int b = 0;
	if (a && b)//“0为假，其他为真”，因此，条件中的b实际为假，条件不成立//故无法打印
	{

		printf("well");
	}

	if (a || b)//a或者b有一个为真即可//所以可以打印
	{
		printf("better");
		
	}


	return 0;
}

