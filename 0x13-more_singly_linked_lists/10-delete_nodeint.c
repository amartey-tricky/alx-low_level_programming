#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	tmp = *head;
	i = 0;
	while (tmp)
	{
		if (i == index)
		{
			if (tmp == *head)
			{
				*head = tmp->next;
				free(tmp);
				return (1);
			}
			tmp2->next = tmp->next;
			free(tmp);
			return (1);
		}
		tmp2 = tmp;
		tmp = tmp->next;
		i++;
	}
	return (-1);
}
