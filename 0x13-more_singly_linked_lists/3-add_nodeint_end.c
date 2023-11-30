#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of listint_t list.
 * @head: pointer to a pointer of listint_t type
 * @n: number to add in the node
 *
 * Return: listint_t (SUCCESS), NULL (FAILURE)
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *current;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	current = *head;
	while (current != NULL)
		current = current->next;

	current->next = node;
	return (node);
}
