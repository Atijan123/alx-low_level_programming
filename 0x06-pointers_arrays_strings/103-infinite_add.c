/**

infinite_add - Adds two numbers.

@n1: First number to add.

@n2: Second number to add.

@r: Buffer to store the result.

@size_r: Size of the buffer.

Return: Pointer to the result, or 0 if buffer is too small.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m;

for (i = 0; n1[i]; i++)
;
for (j = 0; n2[j]; j++)
;
if (i >= size_r || j >= size_r)
return (0);
k = m = 0;
r[k + 1] = '\0';
for (i--, j--, l = size_r - 1; i >= 0 || j >= 0; i--, j--, l--)
{
if (i >= 0)
m += n1[i] - '0';
if (j >= 0)
m += n2[j] - '0';
if (m > 9)
{
r[k] = m - 10 + '0';
m = 1;
}
else
{
r[k] = m + '0';
m = 0;
}
r[l] = r[k];
k++;
}
if (m && l >= 0)
{
r[l] = m + '0';
return (r);
}
else if (m)
return (0);
return (&r[l + 1]);
}





