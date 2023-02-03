#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - singly linked list
 *
 * @h: ...
 *
 * Description: singly linked list node structure
 * for Holberton project
 *
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
size_t count;
const list_t *current;

for (count = 0, current = h; current != NULL; count++, current = current->next)
{
if (current->str == NULL)
printf("[%u] %p\n", current->len, current->str);
else
printf("[%u] %s\n", current->len, current->str);
}

return (count);
}
