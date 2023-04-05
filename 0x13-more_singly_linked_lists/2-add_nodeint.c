#include "lists.h"
#include <stdio.h>

/**
 *add_nodeint - the link list to add
 *@n: node data
 *@head: head of the list
 *Return: new_node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
	{
		return (NULL);
	}
	else
		node1->n = n;
	node1->next = *head;

		if (*head != NULL)
		node1->next = *head;
		*head = node1;
	return (node1);
}

