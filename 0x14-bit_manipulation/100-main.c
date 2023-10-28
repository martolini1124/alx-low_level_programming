#include <stdio.h>
#include "main.h"

/**
 * This is the main function, which serves as the entry point of the program.
 * It initializes and runs the application.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
int n;

n = get_endianness();
if (n != 0)
{
printf("Little Endian\n");
}
else
{
printf("Big Endian\n");
}
return (0);
}

