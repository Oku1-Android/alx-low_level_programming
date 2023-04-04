#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *print_listint - the sinlgy link list
 *@h: the nodes in link list
 *@next: connection to the new node
 *Return: number of elements
 **/

size_t print_listint(const listint_t *h)
{
	listint_t *head;
	listint_t *nodes;
	size_t numNodes;

	nodes = head;

	while (nodes->next != NULL)
	{
		printf("Elements of listint_t are %d \n", nodes->next);
		nodes = nodes->next

		numNodes++;
	}
		return (numNodes);
}
