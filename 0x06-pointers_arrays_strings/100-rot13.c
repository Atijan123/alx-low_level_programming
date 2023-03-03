#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 encryption
 * @s: String to be encoded
 *
 * Return: Pointer to encoded string
 */
char *rot13(char *s)
{
char *ret = s;
int i, j;
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; in[j] != '\0'; j++)
{
if (s[i] == in[j])
{
s[i] = out[j];
break;
}
}
}
return (ret);
}

