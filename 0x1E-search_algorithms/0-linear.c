#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if value is not present
 * in array or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t k;

	if (!array)
		return (-1);

	for (k = 0; k < size; k++)
	{
		printf("Value checked array[%li] = [%i]\n", k, array[k]);
		if (array[k] == value)
			return (k);
	}
	return (-1);
}
