#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
	/* Declare variables */
	int i;

	/* Print a message */
	printf("Infinite loop incoming :(\n");

	/* Initialize i */
	i = 0;

	/* Infinite loop */
	while (i < 10)
	{
		putchar(i);
		i++; /* Increment i */
	}

	/* Print a message */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}

