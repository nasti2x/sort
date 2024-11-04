#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "function.h"
#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int a[10000];
	int b[10000];
	int c[10000];
	int d[10000];
	int n;
	int t;
	double time_spent = 0.0;
	clock_t begin = clock();
	scanf_s ("%d", & n);
	generation(a, n);
	output(a, n);
	printf("\n");
	Pris(a, b, n);
	Pris(a, c, n);
	Pris(a, d, n);
	printf("Введите номер сортировки - ");
	scanf_s("%d", &t);
	switch (t)
	{
	case 1:
		bubbleSort(b, n);
		output(b, n);
		printf("\n");
		printf("пузырьковая сортировка");
		break;
	case 2:
		SelectionSort(c, n);
		output(c, n);
		printf("\n");
		printf(" сортировка выбором");
		break;
	case 3:
		InsertionSort(n, d);
		output(d, n);
		printf("\n");
		printf("сортировка вставкой");
		break;
	default:
		printf("Нет такого номера");
		break;
	}
	clock_t end = clock();
	time_spent += (end - begin) / CLOCKS_PER_SEC;
	printf("\n");
	printf("Процесс занял %f миллисекунд \n", time_spent);
	return main();
}