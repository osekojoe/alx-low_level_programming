#include "lists.h"

/**
* dlistint_len - number of elements in a linked dlistint_t list
* @h: list head
*
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	if (h == NULL)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
