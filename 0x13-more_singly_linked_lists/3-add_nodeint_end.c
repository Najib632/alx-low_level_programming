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
	listint_t *node; /* current node to be alloced*/
	listint_t *prev_node; /* previous node parser*/

	node = malloc(sizeof(listint_t)); /* alloc mem exactly how listint_t is*/
	if (node == NULL) /* check if mem is not alloced*/
		return (NULL); /* return is mem is not alloced*/

	node->n = n; /* assign n to be stored in the node created*/
	node->next = NULL; /* indicate that the end of the linked list*/

	if (*head == NULL) /* check if the previous pionter is not empty*/
	{
		*head = node; /* point to the current node if empty*/
		return (node); /* return the current node*/
	}

	prev_node = *head; /* point to the previous node*/
	while (prev_node->next != NULL)/*check next link is not the end of list*/
		prev_node = prev_node->next; /* point to the next node */

	prev_node->next = node; /*make the previous node point to the */
	return (node);
}
