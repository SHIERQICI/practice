#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//static 修饰局部变量；效果，延长局部变量的生命周期，变为和程序生命周期一致；

//void test()
//	{
//		int a = 1;//变量出生命周期销毁，因此循环仍然用“a=1”进行后续计算，得出循环十次的“2”
//		a++;
//		printf("%d ", a);
//
//	}
//
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;//得出结果“2、3、4、5、6、7、8、9、10、11”，因为static 修饰了变量 int a ;
//	a++;
//	printf("%d ", a);
//
//}
//
//
//int main()
//{
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//
//	}
//
//
//	return 0;
//}


//static,作用于全局变量的时候


		static int b = 90;//全局变量b被static变为静态区只作用于内部的连接，外部的extern无法调取

		//int b = 90;




