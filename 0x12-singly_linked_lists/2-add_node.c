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
* add_node - adds a new node at the beginning of a list_t list.
* @head: head of list
* @str: string
* Return: pointer to current position in the list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (head == NULL || newNode == NULL)
		return (0);
	newNode->str = strdup(str);
	newNode->len = _strlen((char *)str);
	newNode->next = *head;
	*head = newNode;

	return (*head);	
}
