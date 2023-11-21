#include "lists.h"

/**
 * reverse_listint - this reverses a linked list.
 * @head: a pointer to the first element in the list.
 * Return: a pointer to the first element in the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
	(*head)->next = prev;
	prev = *head;
	*head = next;
	}
*head = prev;

return (*head);
}
