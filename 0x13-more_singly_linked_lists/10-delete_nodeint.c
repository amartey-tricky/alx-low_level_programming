#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index of node to delete
 *
 * Return: 1 if success, 0 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (!head || !*head)
		return (0);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;
	for (i = 0; temp->next && i < index - 1; i++)
		temp = temp->next;

	if (temp->next)
	{
		temp->next = temp->next->next;
		free(temp->next);
		return (1);
	}

	return (0);
}
