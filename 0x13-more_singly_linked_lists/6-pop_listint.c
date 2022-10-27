#include "lists.h"

/**
* pop_listint - deletes the head node of linked list
* @head: list head
* Return: head node’s data (n), 0 if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	int retVal = 0;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	retVal = (*head)->n;
	free(*head);
	*head = next_node;
	return (retVal);
}
