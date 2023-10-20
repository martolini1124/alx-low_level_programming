#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
list_t *head = NULL;
list_t *new;
size_t n;

new = malloc(sizeof(list_t));
if (new == NULL)
{
printf("Error\n");
return (1);
}
new->str = strdup("Hello");
new->len = 5;
new->next = head;
head = new;
n = print_list(head);
printf("-> %lu elements\n", n);

printf("\n");
free(new->str);
new->str = NULL;
n = print_list(head);
printf("-> %lu elements\n", n);

while (head != NULL)
{
list_t *temp = head;
head = head->next;
free(temp->str);
free(temp);
}

return (0);
}
