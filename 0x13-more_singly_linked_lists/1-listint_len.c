#include "lists.h"

/**
 * listint_len - calculates the number of elements
 * @h: the starting of the list that is the head
 *
 * Return: total elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t Nelement = 0;

	while (node != NULL)
	{
		Nelement++;
		node = node->next;
	}
	return (Nelement);
}
