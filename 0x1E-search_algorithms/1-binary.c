#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing value,
 * or -1 if value not found or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int left, mid, right;
	int i;

	if (!array)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");

		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
