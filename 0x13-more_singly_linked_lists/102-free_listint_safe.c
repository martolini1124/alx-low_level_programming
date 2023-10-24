#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t len = 0;
listint_t *temp;

if (!h || !*h)
{
return (0); /* Handle NULL input. */
}

while (*h)
{
temp = (*h)->next;

/* Check if the current and next nodes are in a loop. */
if (temp >= *h)
{
free(*h);
*h = NULL;
len++;
break;
}
else
{
free(*h);
*h = temp;
len++;
}
}

return (len);
}
