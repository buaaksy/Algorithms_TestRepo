// sort_1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>

int main()
{
	int a[11], i, j, t;
	for (i = 0; i <= 10; i++)
	{
		a[i] = 0;
	}
	for (j = 1; j <= 5; j++)
	{
		scanf("%d", &t);
		a[t] ++;
	}
	for (i = 0; i <= 10; i++)
	{
		for (j = 1; j <= a[i]; j++)
		{
			printf("%d", i);
		}
	}
	getchar();
	getchar();
    return 0;
}

