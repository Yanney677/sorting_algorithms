#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * enum boolean - a struct of boolean values of enumeration
 * @true: set booleans true to 1
 * @false: set boolean false to 0
 */
typedef enum boolean
{
	false = 0,
	true = 1
} boolean;


/* Swapping func. */
void swap_int(int *a, int *b);

/* Prints func. of the array & list */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/* Prototypes of the func. */
void bubble_sort(int *array, size_t size);

#endif
