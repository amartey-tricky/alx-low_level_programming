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

	if ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}

}
