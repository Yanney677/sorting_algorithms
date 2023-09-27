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
 * selection_sort - a function that sort a selected array of integers
 * in ascending order
 * @array: array of integers to be swap
 * @size: size of the array to be sorted
 *
 */
void selection_sort(int *array, size_t size)
{
	int *integ;
	size_t s, t;

	if (size < 2 || array == NULL)
		return;

	for (s = 0; s < size - 1; s++)
	{
		integ = array + s;
		for (t = s + 1; t < size; t++)
			integ = (array[t] < *integ) ? (array + t) : integ;

		if ((array + s) != integ)
		{
			interchange_ints(array + s, integ);
			print_array(array, size);
		}
	}
}
