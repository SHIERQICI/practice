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

	//��Ҫ����˼·������һ�μ��㣬��Ҫ���롢���㡢�������������
	//������������Ҫ��&�ֱ�����ǰ�棬������������ʱ���bug

	//����
	scanf("%d %d", &a, &b);

	//��������
	
	int sum = bida(a, b);

	//�����ӡ
	printf("%d", sum);

	return 0;
}