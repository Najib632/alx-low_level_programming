#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: head of the linked list
 *
 * Return: Nothing.
 **/
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head);
		free(head);
	}
}
