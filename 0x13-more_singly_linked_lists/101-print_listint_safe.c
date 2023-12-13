#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: head node of listint_t linked list
 *
 * Return: the number of nodes in the list
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t size_n = 0;


	if (head == NULL)
	{
		exit(98);
		return (size_n);
	}

	for (size_n = 1; head != NULL; size_n++)
	{
		printf("[%p] %d\n", (void *) head, head->n);
			if (head->next > head)
		{
			printf("-> [%p] %d\n", (void *) head->next, (*head->next).n);
			break;
		}
		else
		{
			head = head->next;
		}
	}
	return (size_n);
}
