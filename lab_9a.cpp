#define _CRT_SECURE_NO_WARNINGS
#include <stdafx.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <locale.h>
void inp(int** a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
int main()
{
	setlocale(LC_ALL, "");
	int** a;
	int i, n;
	printf("Размерность: ");
	scanf("%d", &n);
	a = new int* [n];
	for (i = 0; i < n; i++)
		a[i] = new int[n];
	inp(a, n);
}