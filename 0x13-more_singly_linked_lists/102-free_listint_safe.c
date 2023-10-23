#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the head of the list.
 *
 * Returns: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t nodes_freed = 0;
listint_t *current;
while (*h)
{
nodes_freed++;
current = *h;
*h = current->next;
free(current);
if (current <= *h)
{
*h = NULL;
break;
}
}
return (nodes_freed);
}
