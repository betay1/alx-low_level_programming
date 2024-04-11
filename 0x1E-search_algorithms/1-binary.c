#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the arra
 * Return:
 */
void print_array(int *array, int size)
{
	int x;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (x = 0; x < size; x++)
	{
		if (x == 0)
			printf("%d", array[x]);
		else
			printf(", %d", array[x]);
	}

	printf("\n");
}

/**
 * binary_search - find value in sorted array using binary search algorithem
 * @array: pointer to first element in array
 * @size: size of the array
 * @value: value to be searched
 * Return: index position of value or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int h = size - 1;
	int m;

	if (array == NULL || size == 0 || array[0] > value)
		return (-1);

	while (l <= h)
	{
		m = (l + h) / 2;

		print_array(&array[l], (h - l) + 1);

		if (array[m] == value)
			return (m);

		if (array[m] > value)
			h = m - 1;

		else
			l = m + 1;
	}

	return (-1);
}
