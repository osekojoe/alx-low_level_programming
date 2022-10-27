#include "lists.h"

/**
* listint_len - get num of elems in linked list.
* @h: list head.
* Return: num of elems in linked list.
*/
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		counter++;
	}
	return (counter);
}
