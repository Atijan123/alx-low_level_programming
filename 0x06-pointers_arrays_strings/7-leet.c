#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: input string
 *
 * Return: pointer to resulting string
 */
char *leet(char *str)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

i = 0;
while (str[i] != '\0')
{
j = 0;
while (letters[j] != '\0')
{
if (str[i] == letters[j])
str[i] = numbers[j];
j++;
}
i++;
}
return (str);
}

