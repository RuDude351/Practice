#define _CRT_SECURE_NO_WARNINGS
#include <stdafx.h>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#define N 5
//с клавиатуры
void inpm(int a[N][N])
{
	int i, j;
	printf("Укажите элементы\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("a[%d][%d]:", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
//из файла
void inpmf(int a[N][N])
{
	int i, j;
	FILE* fp;
	fp = fopen("lab_7.txt", "r");
	if (fp)
	{
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				fscanf(fp, "%d", &a[i][j]);
			}
		}
		fclose(fp);
	}
}
int main()
{
	setlocale(LC_CTYPE, "");
	int a[N][N], c;
	void(*pfunc)(int[N][N]);
	do
	{
		printf("Укажите 1, если хотите ввести элементы с клавиатуры. Укажите 2, если из файла\n");
		scanf("%d", &c);
	} while (c != 1 && c != 2);
	switch (c)
	{
	case 1: pfunc = &inpm;
		break;
	case 2: pfunc = &inpmf;
	}
	_getch();
}