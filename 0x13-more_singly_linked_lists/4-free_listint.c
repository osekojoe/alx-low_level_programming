#include "lists.h"

/**
* free_listint - frees a list
* @head: head of a list.
* Return: None
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
