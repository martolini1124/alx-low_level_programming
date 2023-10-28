#include <stdio.h>
#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);

*n &= ~(1UL << index);
return (1);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int n;

n = 1024;
clear_bit(&n, 10);
printf("%lu\n", n);

n = 0;
clear_bit(&n, 10);
printf("%lu\n", n);

n = 98;
clear_bit(&n, 1);
printf("%lu\n", n);

return (0);
}
