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
