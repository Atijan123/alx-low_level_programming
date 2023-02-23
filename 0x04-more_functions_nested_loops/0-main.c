#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int c;

c = 'A';
printf("%c is uppercase: %d\n", c, _isupper(c));

c = 'a';
printf("%c is uppercase: %d\n", c, _isupper(c));

return (0);
}

