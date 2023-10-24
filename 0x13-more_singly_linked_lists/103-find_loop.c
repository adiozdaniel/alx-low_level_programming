#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the list
 * Return: address of the node where the loop starts
 * or NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *len_one, *len_two;

	len_one = len_two = head;
	while (len_one && len_two && len_two->next)
	{
		len_one = len_one->next;
		len_two = len_two->next->next;
		if (len_one == len_two)
		{
			len_one = head;
			break;
		}
	}

	if (!len_one || !len_two || !len_two->next)
		return (NULL);

	while (len_one != len_two)
	{
		len_one = len_one->next;
		len_two = len_two->next;
	}

	return (len_two);
}
