
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;

do {
if (*s == '-')
sign *= -1;

else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');

else if (num > 0)
break;
} while (*s++);
return (num 0-reset_to_98.c 1-swap.c 2-strlen.c 3-puts.c 4-print_rev.c 5-rev_string.c 6-puts2.c 7-puts_half.c 8-print_array.c 9-strcpy.c main.h README.md sign);
}
