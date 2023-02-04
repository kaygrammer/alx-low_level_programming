#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
size_t node_count = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
node_count++;
}

return (node_count);
}
