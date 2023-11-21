#include "lists.h"

/**
 * pop_listint - this deletes the head node of a linked list.
 * @head: the pointer to the first node in the linked list.
 * Return: data inside the elements was deleted
 * or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
