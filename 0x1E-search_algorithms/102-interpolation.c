#include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array using
 * interpolation search
 * @array: pointer to the start of the array
 * @size: the size of the array
 * @value: the value to be searched
 * Return: first index value or -1 if not present or array is null
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int l = 0;
	int h = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (l <= h)
	{
		pos = l + (((double)(h - l) / (array[h] - array[l]))
			     * (value - array[l]));

		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}
		else
		{
			if (array[pos] > value)
				h = pos - 1;
			else
				l = pos + 1;
		}
	}

	return (-1);
}
