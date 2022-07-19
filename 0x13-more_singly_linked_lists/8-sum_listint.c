#include "lists.h"

/**
 * sum_listint - sums the values of a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: sum of the values of the linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
