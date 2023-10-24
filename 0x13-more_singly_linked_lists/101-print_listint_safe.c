#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _alloc - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @_l: the old list to append
 * @_s: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 */
const listint_t **_alloc(const listint_t **_l, size_t _s, const listint_t *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(_s * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(_l);
		exit(98);
	}
	for (i = 0; i < _s - 1; i++)
		newlist[i] = _l[i];
	newlist[i] = new;
	free(_l);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the start of the list
 * Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _alloc(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
