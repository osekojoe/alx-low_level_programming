#include "lists.h"
#include <stdlib.h>

/**
* _strlen -gets length of the string
* @s: pointer to string
*
* Return: string length
*/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		;
	}
	return (i);
}

/**
* add_node_end - adds a new node at the end of a list_t list.
* @head:pointer to head
* @str: pointer to string
*
* Return: address of the new head node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *last;

	last = *head;
	newNode = malloc(sizeof(list_t));

	if (head == NULL || str == NULL)
	{
		return (0);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen((char *)str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;
	return (*head);
}
