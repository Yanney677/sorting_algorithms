#include "sort.h"

/**
 * interchange_ints - a function that interchanges two integers
 * @x: first integers to change
 * @y: second integers to change
 */
void interchange_ints(int *x, int *y)
{
	int ptr;

	ptr = *x;
	*x = *y;
	*y = ptr;
}

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array of integers to be sorted
 * @size: size of the array in the function
 *
 * Description: prints the swap array after each sort.
 */
void bubble_sort(int *array, size_t size)
{
	boolean bubly = false;
	size_t j, leng = size;

	if (size < 2 || array == NULL)
		return;

	while (bubly == false)
	{
		bubly = true;
		for (j = 0; j < leng - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				interchange_ints(array + j, array + j + 1);
				print_array(array, size);
				bubly = false;
			}
		}
		leng--;
	}
}
