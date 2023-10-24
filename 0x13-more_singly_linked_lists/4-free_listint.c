#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees
 * a ```C listint_t``` list
 *
 * @head: the head
 *
 * Return: NULL on failure
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
