#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - the sigly link list
 * @n: node member
 * @next: link to the next node
 *Description: display of singly link list
  */

typeof struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


size_t print_listint(const listint_t *h);

#endif
