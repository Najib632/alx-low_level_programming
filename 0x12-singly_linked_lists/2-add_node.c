#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer of head of node
 * @str: string to alloc
 *
 * Return: list_t (SUCCESS), NULL (FAILURE)
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	char *dup_str = strdup(str);

	if (dup_str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(dup_str);
		return (NULL);
	}
	node->str = dup_str;
	node->len = strlen(dup_str);
	node->next = *head;
	*head = node;

	return (node);
}
