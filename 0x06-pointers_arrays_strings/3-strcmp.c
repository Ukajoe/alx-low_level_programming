
#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Compares strings.
 * @s1: A pointer to compared.
 * @s2: A pointer to the second 
 * Return: If str1 < str2
 * of the first unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive
 * difference of the first 
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
