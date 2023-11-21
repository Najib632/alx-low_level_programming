#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of the node
 *
 * Return: size of a list
 **/
size_t list_len(const list_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
		h = h->next;

	return (n);
}
