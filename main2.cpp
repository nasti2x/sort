#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "function.h"

int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	printf("������� ������ ������� - ");
	int size, number;
	scanf_s("%d",& size);

	int* arr = (int*)malloc(size * sizeof(int));

	if (arr == NULL) {
		printf("������ �� ��������.\n");
		return 1;
	}

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20;
	}

	printf("������ - : ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	clock_t fTimeStart, fTimeStop;
	fTimeStart = clock() * 1000 / CLOCKS_PER_SEC;
	printf("\n");
	printf("������� ����� ���������� - ");
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
		printf("��� ����� ���������� ");
		break;
	}
	fTimeStop = clock() * 1000 / CLOCKS_PER_SEC;
	printf("\n���������� � ������ ��������� ������� %i(ms)\n", fTimeStop - fTimeStart);
	free(arr);
	return 0;
}