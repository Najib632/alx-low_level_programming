#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: pointer to list_t type
 *
 * Return: size_t (SUCCESS)
 **/
size_t print_listint(const listint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
