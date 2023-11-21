#include "lists.h"

/**
 * free_listint - this frees a listint_t list.
 * @head: listint list to be set free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
