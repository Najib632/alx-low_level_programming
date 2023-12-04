#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and return the head node's data(n)
 * @head: pointer to the head of a linked list
 *
 * Return: node data (SUCCESS)
 **/
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *pop_node;

	if (*head)
	{
		pop_node = *head;
		n = pop_node->n;
		*head = pop_node->next;
		free(pop_node);
	}
	return (n);
}
