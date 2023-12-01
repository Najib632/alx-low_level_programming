#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: head node of a listint_t linked list
 *
 * Return: sum of all data
 **/
int sum_listint(listint_t *head)
{
	listint_t *node_parser;
	int sum;

	node_parser = head;
	for (sum = 0; node_parser != NULL; node_parser = node_parser->next)
	{
		sum += node_parser->n;
	}
	return (sum);
}
