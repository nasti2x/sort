#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "function.h"

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	printf("Введите размер массива - ");
	int size, number;
	scanf_s("%d",& size);

	int* arr = (int*)malloc(size * sizeof(int));

	if (arr == NULL) {
		printf("Память не выделена.\n");
		return 1;
	}

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20;
	}

	printf("Массив - : ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	clock_t fTimeStart, fTimeStop;
	fTimeStart = clock() * 1000 / CLOCKS_PER_SEC;
	printf("\n");
	printf("Введите номер сортировки - ");
	scanf_s("%d",& number);
	switch (number)
	{
	case 1:
		bubble_sort(size, arr);
		for (int i = 0; i < size; i++) {
			printf("%d ", arr[i]);
		}
		break;
	case 2:
		selection_sort(arr, size);
		for (int i = 0; i < size; i++) {
			printf("%d ", arr[i]);
		}
		break;
	case 3:
		insertionSort(arr, size);
		for (int i = 0; i < size; i++) {
			printf("%d ", arr[i]);
		}
		break;
	case 4:
		quicksort(arr,0, size-1);
		for (int i = 0; i < size; i++) {
			printf("%d ", arr[i]);
		}
		break;
	default:
		printf("нет такой сортировки ");
		break;
	}
	fTimeStop = clock() * 1000 / CLOCKS_PER_SEC;
	printf("\nСортировка в режиме реального времени %i(ms)\n", fTimeStop - fTimeStart);
	free(arr);
	return 0;
}