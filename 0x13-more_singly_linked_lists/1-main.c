#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}

int main(void)
{
listint_t *head;
listint_t *new;
listint_t hello = {8, NULL};
size_t n;

head = &hello;
new = malloc(sizeof(listint_t));
if (new == NULL)
{
printf("Error\n");
return (1);
}
new->n = 9;
new->next = head;
head = new;
n = listint_len(head);
printf("-> %lu elements\n", n);
free(new);
return (0);
}
