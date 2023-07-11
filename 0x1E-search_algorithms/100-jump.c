#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if value is not present
 * in array or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start, end, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (end = 0; end < size && array[end] < value;
	     start = end, end += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       end, array[end]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (; start <= fmin(end, size - 1); start++)
	{
		printf("Value checked array[%lu] = [%d]\n", start,
				array[start]);
		if (array[start] == value)
			return (start);
	}

	return (-1);
}
