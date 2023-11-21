#include "lists.h"

/**
 * get_nodeint_at_index - this returns the element at a certain index in a linked list.
 * @head: first element in the linked list.
 * @index: index of the element to return.
 * Return: a pointer to the element we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}
