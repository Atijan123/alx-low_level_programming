#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to resulting string dest
 */
char *_strncat(char *dest, const char *src, int n)
{
int dest_len = 0, i = 0;

/* Find length of destination string */
while (dest[dest_len] != '\0')
dest_len++;

/* Append src to dest, up to n bytes */
while (src[i] != '\0' && i < n)
{
dest[dest_len + i] = src[i];
i++;
}

/* Add null terminator to resulting string */
dest[dest_len + i] = '\0';

return dest;
}

