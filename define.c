#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ADD(x,y) ((x)+(y))
	  //宏名（参数）“参数是无类型”
	  //((x)+(y))是本段代码中的宏体
int main()
{
	int a = 19;
	int b = 67;
	int c = ADD(a, b);//宏的作用似乎是替换，初步了解
	printf("%d\n", c);//结果86计算成功
	return 0;
}