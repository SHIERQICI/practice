
#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = a > b ? a : b;
//	printf("%d\n", r);//条件不成立，输出结果b
//
//	//条件操作符，也称为三目操作符，一个是条件，另外两个是结果；
//	//本代码中，条件是“a>b”，若条件成立，则输出第一个结果“a:b”中的“a”否则结果“b”；
//	//似乎在这里符号“:”有点否则的意思。连起来读意思是“如果~~~，则a，否则b”；
//
//	int c = 30;
//	int d = 25;
//	int t = c > d ? c : d;
//
//	printf("%d\n", t);//条件成立，输出结果c
//
//
//
//
//	return 0;
//}


//int main()
//{
//	int a = 20;
//		int b = 30;
//		int c = 40;
//
//
//		int r = (a = b - c, b = c + 5, c = b + a);
//		printf("%d\n", r);
//		//逗号表达式就是用逗号隔开的一段表达式；
//		//逗号表达式中，按照顺序（从左向右）逐个计算，整个表达式的整体结果为最后一个表达式的计算结果；
//
//
//	return 0;
//}


////引用操作符
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//这里的符号“[]”的作用是：创建和确定一个数组；
//
//	printf("%d\n", arr[3]);//这里的符号“[]”的作用：是引用下角标，所以此时这个符号是“引用操作符”；操作的两个操作数分别是“arr”和“3”；
//
//
//
//	return 0;
//}

//函数调用操作符

int add(int x , int y)
{
	return (x + y) ;


}
int main()
{
	int a = 10;
	int b = 10;

	int sum = add(a, b);//这里的“()”，就是函数的函数调用操作符，有这对括号，才能识别出函数要调用的数据；
	printf("%d\n", sum);
	return 0;
}