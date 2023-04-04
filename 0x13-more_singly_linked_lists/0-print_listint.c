#include "lists.h"
#include <stdio.h>

/**
 *print_listint - the sinlgy link list
 *@h: the nodes in link list
 *@next: connection to the new node
 *Return: number of elements
 **/

size_t print_listint(const listint_t *h)
{
	//listint_t *head;
	
	const listint_t *node = h;
	size_t numNodes = 0;
	
	//nodes = head;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		numNodes++;
		node = node->next;
	}
		return (numNodes);
}
