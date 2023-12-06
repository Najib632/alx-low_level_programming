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

	delete_node = *head;
	if (!delete_node)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(delete_node);
	}
	else
	{
		for (i = index; i; --i)
		{
			if (i <= index && !delete_node->next)
				return (-1);
			prev_node = delete_node;
			delete_node = delete_node->next;
		}
		prev_node->next = delete_node;
		prev_node->next = delete_node->next;
		free(delete_node);
	}
	return (-1);
}
