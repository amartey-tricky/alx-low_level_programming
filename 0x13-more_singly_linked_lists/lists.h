#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* FUnctiont that prints all elements of a listint_t list */
size_t print_listint(const listint_t *h);

/* Function that returns the number of elements in a listint_t list */
size_t listint_len(const listint_t *h);

/* Function that adds a new node at the beginning of a listint_t list */
listint_t *add_nodeint(listint_t **head, const int n);

/* Function that adds a new node at the end of a listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Function that frees a listint_t list */
void free_listint(listint_t *head);

/* Function that frees a listint_t list */
void free_listint2(listint_t **head);

/* Function that deletes the head node of a listint_t list */
int pop_listint(listint_t **head);

/* Function that returns the nth node of a listint_t list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* Function that return the sum of all the data(n) of a listint_t list */
int sum_listint(listint_t *head);

/* Function thatinserts a new node at a given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/* Function that deletes a node at a given position */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
