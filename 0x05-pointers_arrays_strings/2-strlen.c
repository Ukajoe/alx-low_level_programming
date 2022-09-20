
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length
 * Return: The length of @str.
 */
int _strlen(char *s)
{
int length = 0;

while (*s++)
length++;

return (length);
}
