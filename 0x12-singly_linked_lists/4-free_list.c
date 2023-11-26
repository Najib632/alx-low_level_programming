#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to a list_t variable
 *
 * Return: Nothing.
 **/
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (!head)
			free(head->next);
		free(head);
	}
}
