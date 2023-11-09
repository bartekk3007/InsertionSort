#include <stdio.h>
#include <stdlib.h>

void printArray(int* tab, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
}

void swap(int* arr, int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void insertionSort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			swap(arr, j, j - 1);
			j--;
		}
	}
}

int main(void)
{
	int arr[] = { 55, 13, 34, 21, 89, 5, 8, 144 };
	int size = sizeof(arr) / sizeof(*arr);

	insertionSort(arr, size);

	printArray(arr, size);

	return 0;
}