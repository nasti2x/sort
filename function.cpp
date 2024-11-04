#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void generation(int x[], int n) {
	for (int i = 0; i < n; ++i) {
		x[i] = rand() % 10;
	}
}
void output(int x[], int n) {
	for (int i = 0; i < n; ++i) {
		printf("%5d", x[i]);
	}
}
void Pris(int x[], int x1[], int n) {
    for (int i = 0; i < n; ++i) {
        x1[i] = x[i];
    }
}
void bubbleSort(int x[],int size){
    double t1 = clock();
    for (int i = 0; i < size - 1; i++) {
        for (int j = (size - 1); j > i; j--) {
            if (x[j - 1] > x[j]) {
                int temp = x[j - 1];
                x[j - 1] = x[j];
                x[j] = temp;
            }
        }
    }
    double t2 = clock();
    double t3 = (t2 - t1) / CLOCKS_PER_SEC;
    printf("%f", t3);
}
void SelectionSort(int* num, int size) {
    int min, temp; 
    for (int i = 0; i < size - 1; i++)
    {
        min = i; 
        for (int j = i + 1; j < size; j++)  
        {
            if (num[j] < num[min]) 
                min = j;      
        }
        if (min == i) continue;  
        temp = num[i];     
        num[i] = num[min];
        num[min] = temp;
    }
}

void InsertionSort(int n, int mass[])
{
    int newElement, location;

    for (int i = 1; i < n; i++)
    {
        newElement = mass[i];
        location = i - 1;
        while (location >= 0 && mass[location] > newElement)
        {
            mass[location + 1] = mass[location];
            location = location - 1;
        }
        mass[location + 1] = newElement;
    }
}


    

    


