#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_len list
 * @h: pointer to list_t type
 *
 * Return: size_t (SUCCESS)
 **/
size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
		h = h->next;
	return (n);
}
