#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#define N 5
//ввод элементов
void inpm(int a[N][N]) {
	int i, j;
	printf("Укажите элементы \n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("a[%d][%d]:", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}