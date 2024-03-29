#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: head node of listint_t linked list
 * @idx: index of a value in the list
 * @n: value to be inserted in the list
 *
 * Return: Address of new node (SUCCESS), NULL (FAILURE)
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *curr_node = *head;
	listint_t *prev_node = *head;
	unsigned int i, size;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (size = 1; prev_node->next != NULL; ++size)
		prev_node = prev_node->next;
	if (idx == size)
	{
		prev_node->next = new_node;
		return (new_node);
	}
	for (i = idx; i; --i)
	{
		if (idx > size)
		{
			return (NULL);
		}
		else
		{
			prev_node = curr_node;
			curr_node = curr_node->next;
		}
	}
	prev_node->next = new_node;
	new_node->next = curr_node;
	return (new_node);
}
