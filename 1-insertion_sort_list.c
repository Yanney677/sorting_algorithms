#include "sort.h"

/**
 * interchange_nodes - interchange two nodes in a listint_t doubly-linked list.
 * @w: address to the head
 * @s1: address to the first node to swap
 * @s2: second node to swap
 */
void interchange_nodes(listint_t **w, listint_t **s1, listint_t *s2)
{
	(*s1)->next = s2->next;
	if (s2->next != NULL)
		s2->next->prev = *s1;
	s2->prev = (*s1)->prev;
	s2->next = *s1;
	if ((*s1)->prev != NULL)
		(*s1)->prev->next = s2;
	else
		*w = s2;
	(*s1)->prev = s2;
	*s1 = s2->prev;
}

/**
 * insertion_sort_list - a function that inserts a sort a doubly
 * linked list of integers in ascending order
 * @list: address to the head
 *
 * Description: each inserted and sorted array is printed.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *loops, *put, *ptr;

	if (*list == NULL || (*list)->next == NULL || list == NULL)
		return;

	for (loops = (*list)->next; loops != NULL; loops = ptr)
	{
		ptr = loops->next;
		put = loops->prev;
		while (put != NULL && loops->n < put->n)
		{
			interchange_nodes(list, &put, loops);
			print_list((const listint_t *)*list);
		}
	}
}
