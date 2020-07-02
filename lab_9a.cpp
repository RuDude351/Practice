#define _CRT_SECURE_NO_WARNINGS
#include <stdafx.h>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <locale.h>
//ввод
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
//вывод
void outp(int** a, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%5d ", a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	setlocale(LC_ALL, "");
	int** a;
	int i, n, j, k, max;
	printf("Размерность: ");
	scanf("%d", &n);
	a = new int* [n];
	for (i = 0; i < n; i++)
		a[i] = new int[n];
	inp(a, n);
	printf("Массив:\n");
	outp(a, n);
	k = 0;
	for (i = 0; i < n; i++)
	{
		max = a[i][0];
		for (j = 0; j < n; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				k = j;
			}
		}
		if (k != 0)
		{
			for (j = 0; j < k; j++)
				a[i][j] = 0;
		}
	}
	printf("Результат:\n");
	outp(a, n);
	for (i = 0; i < n; i++)
		free(a[i]);
	free(a);
	getchar();
}