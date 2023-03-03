#include "main.h"
#include <unistd.h>

#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 *
 * Return: On success, returns 1. On error, returns -1 and sets errno.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

