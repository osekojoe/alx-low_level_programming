#include "lists.h"

/**
* pop_listint - deletes the head node of linked list
* @head: list head
* Return: head node’s data (n), 0 if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *nextNode = NULL;
	int headNodeData = 0;

	if (*head == NULL)
	{
		return (0);
	}

	nextNode = (*head)->next;
	headNodeData = (*head)->n;
	free(*head);
	*head = nextNode;
	
	return (headNodeData);
}
