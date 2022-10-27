#include "lists.h"

/**
* print_listint - prints all the elements of a list.
* @h: list head.
* Return: the number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t counter = 0; /* initialize elem counter */
	const listint_t *current = h; /* position indicator */

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		counter++;
	}
	return (counter);
}
