#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ADD(x,y) ((x)+(y))
	  //�������������������������͡�
	  //((x)+(y))�Ǳ��δ����еĺ���
int main()
{
	int a = 19;
	int b = 67;
	int c = ADD(a, b);//��������ƺ����滻�������˽�
	printf("%d\n", c);//���86����ɹ�
	return 0;
}