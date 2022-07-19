#include "lists.h"

/**
 * free_listint - free a listint_t list
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
