#include "sort.h"

void interchange_ints(int *x, int *y);
int lomutopart(int *array, size_t size, int up, int down);
void sortlomuto(int *array, size_t size, int up, int down);
void quick_sort(int *array, size_t size);

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
 * lomuto_pars - quick traversing and  sorting an array
 * @array: array of integers to be sorted
 * @size: size of the array
 * @left: the first index of the array
 * @right: the last index of the array
 *
 * Return: prints the indices of the tranversing.
 */
int lomuto_pars(int *array, size_t size, int left, int right)
{
	int *middle, begin, end;

	middle = array + right;
	for (begin = end = left; end < right; end++)
	{
		if (array[end] < *middle)
		{
			if (begin < end)
			{
				interchange_ints(array + end, array + begin);
				print_array(array, size);
			}
			begin++;
		}
	}

	if (array[begin] > *middle)
	{
		interchange_ints(array + begin, middle);
		print_array(array, size);
	}

	return (begin);
}

/**
 * select_lomuto - quick transversing and sorting of an array
 * @array: array of the integers to be sorted
 * @size: size of the array
 * @left: the first index of the array.
 * @right: the last index of the array.
 *
 */
void select_lomuto(int *array, size_t size, int left, int right)
{
	int pars;

	if (right - left > 0)
	{
		pars = lomuto_pars(array, size, left, right);
		select_lomuto(array, size, left, pars - 1);
		select_lomuto(array, size, pars + 1, right);
	}
}

/**
 * quick_sort - a function that sorts an array of intergers in
 * ascending order in a quick sort
 * @array: array of integers to be sorted
 * @size: size of the array
 *
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || array == NULL)
		return;

	select_lomuto(array, size, 0, size - 1);
}
