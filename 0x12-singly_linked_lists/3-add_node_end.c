#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to modify addresses
 * @str: string constant
 *
 * Return: list_t (SUCCESS), NULL (FAILURE)
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;
	char *dup_str = strdup(str);

	if (dup_str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = strlen(dup_str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (new_node);
}
