#include <iostream>

int bubble_sort(int n, int array[]) {
	int temp, flag;
	for (int i = 0; i < n - 1; i++) {
		flag = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
	}
	return 0;
}
void selection_sort(int* a, int n) {
	for (int k = 0; k < n - 1; k++) {
		for (int j = k + 1; j < n; j++) {
			if (a[k] > a[j]) swap(a[j], a[k]);
		}
	}
}
void insertionSort(int array[], int size) {
	int i, j, temp;
	for (i = 1; i < size; i++) {
		temp = array[i];
		for (j = i - 1; j >= 0; j--) {
			if (array[j] < temp) {
				break;
			}

			array[j + 1] = array[j];
			array[j] = temp;
		}
	}
}
int partition(int a[], int l, int r) {
	int i = l;
	int k = 0;
	while (i < r) {
		if (a[i] > a[r] && i == r - 1) {
			swap(a[i], a[r]);

		}
		else if (a[i] > a[r]) {
			swap(a[r - 1], a[r]);
			swap(a[i], a[r]);
			r--;
		}
		else i++;
	}
	return r;
}

void quicksort(int a[], int l, int r) {
	if (r <= l) return;
	int i = partition(a, l, r);
	quicksort(a, l, i - 1);
	quicksort(a, i + 1, r);
}