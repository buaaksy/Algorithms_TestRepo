// Fact.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
long long int fact(long int n);
int main()
	{
	int t = 0;
	
	printf_s("��������н׳������������\r\n");
	scanf_s("%d",&t);
	if (t <= 1) {
		printf_s("%d �� = 1\r\n",t);
	}
	else {
		long long int d = fact(t);
		printf_s("%d�� = %d\r\n",t,d);
	}
	getchar();
	getchar();
    return 0;
}
long long int fact(long int n) {
	if (n <= 1)
		return 1;

	else
		return n*fact(n - 1);
}
