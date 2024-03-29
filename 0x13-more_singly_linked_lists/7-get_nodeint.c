#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: head node of a listint_t linked list
 * @index: position of a value in a linked list
 *
 * Return: Addresss of value at index
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node_parser = NULL;

	if (head && ((int)index >= 0))
	{
		node_parser = head;
		for (i = 0; i < index; ++i)
		{
			if (i < index && !node_parser->next)
				return (NULL);
			node_parser = node_parser->next;
		}
	}
	return (node_parser);
}
