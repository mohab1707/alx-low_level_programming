#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t
 * linked list safely.
 * @head: A pointer to the head of the list.
 *
 * Returns: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t num_nodes = 0;
slow = fast = head;
while (fast && fast->next)
{
printf("[%p] %d\n", (void *)slow, slow->n);
num_nodes++;
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
num_nodes++;
break;
}
}
while (slow != fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
num_nodes++;
slow = slow->next;
fast = fast->next;
}
printf("[%p] %d\n", (void *)slow, slow->n);
num_nodes++;
return (num_nodes);
}
