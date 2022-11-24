#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a node at the end of list
 * @head: points to the head of list
 * @str: what goes in the new node
 * Return: pointer to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	unsigned int i;

	if (!(head && str))
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	for (i = 0; str[i]; i++)
	{}
	newNode->len = i;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;
	return (newNode);
}
