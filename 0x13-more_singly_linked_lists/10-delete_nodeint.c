#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of a listint_t linked list
 * @head: head node of a listint_t linked list
 * @index: position of a value in a linked list
 *
 * Return: Always 1 (SUCCESS), -1 (FAILURE)
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *delete_node;
	listint_t *prev_node;
	listint_t *next_node;

	next_node = *head;
	if (next_node == NULL)
		return (-1);

	for (i = index; (int)i >= 0; --i)
	{
		if (i < index && !next_node->next)
			return (-1);
		if ((int)i == ((int)index - 1))
			prev_node = delete_node->next;
		if (prev_node->next == delete_node)
		{
			*head = prev_node;
			prev_node->next = NULL;
		}
		delete_node = next_node;
		next_node = next_node->next;
	}
	prev_node->next = next_node;
	free(delete_node);

	return (1);
}
