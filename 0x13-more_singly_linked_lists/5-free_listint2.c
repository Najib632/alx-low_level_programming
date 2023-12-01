#include "lists.h"

/**
 * free_listint2 - Frees a listint_t lists
 * @head: head of a linked listint_t
 *
 * Return: Nothing.
 **/
void free_listint2(listint_t **head)
{
	if (head && *head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
