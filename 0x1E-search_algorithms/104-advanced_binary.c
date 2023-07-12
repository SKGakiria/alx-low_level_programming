#include "search_algos.h"

int rec_binary_search(int *array, int value, size_t left, size_t right);

/**
 * rec_binary_search - recursively does the binary search for a value
 * in an integer array
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @left: starting index in array
 * @right: ending index in array
 *
 * Return: index where value is located, or -1 if value not found or
 * array is NULL
 */
int rec_binary_search(int *array, int value, size_t left, size_t right)
{
	size_t mid, i;

	if (!array)
		return (-1);

	mid = (left + right) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%i%s", array[i], i == right ? "\n" : ", ");

	if (array[left] == value)
		return ((int)left);

	if (array[left] != array[right])
	{
		if (array[mid] < value)
			return (rec_binary_search(array, value,
						mid + 1, right));
		if (array[mid] >= value)
			return (rec_binary_search(array, value, left, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if value not found or
 * array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t left, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	return (rec_binary_search(array, value, left, right));
}
