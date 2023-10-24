#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to the first node in the list.
 *
 * Return: A pointer to the first node in the new list (the former tail of the list).
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head; /* Renamed from 'next' for clarity */

while (current != NULL)
{
listint_t *next = current->next; /* 'next' was uninitialized before */

current->next = prev;
prev = current;
current = next;
}

*head = prev; /* Update the head to point to the new first node */

return (*head);
}
