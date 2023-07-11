#include "search_algos.h"

int binary_search_helper(int *array, size_t left, size_t right, int value);

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, -1 if value is not present
 * in array or array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, high;

	if (!array)
	{
		return (-1);
	}

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i,
					array[i]);
	}

	high = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, high);
	return (binary_search_helper(array, i / 2, high, value));
}

/**
 * binary_search_helper - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: starting index
 * @right: ending index
 * @value: value to search for
 *
 * Return: index containing value,
 * or -1 if value not found or array is NULL
 */

int binary_search_helper(int *array, size_t left, size_t right, int value)
{
	size_t mid, i;

	if (!array)
	{
		return (-1);
	}

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
