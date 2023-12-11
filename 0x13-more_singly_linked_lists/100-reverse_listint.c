#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: head node of a listint_t linked list
 *
 * Return: a pointer to the first node of the reversed list.
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}
