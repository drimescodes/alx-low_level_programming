#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "main.h"

/**
* _atoi - converts a string to an interger
* @str: pointer to the string to be converted
* Return: Converted string
*/
int _atoi(char *str)
{
int sign = 1, base = 0, i = 0;

for (i = 0; str[i] != '\0' && (str[i] < '0' || str[i] > '9'); i++)
{
if (str[i] == '-' || str[i] == '9')
sign *= 1 - 2 * (str[i] == '-');
if (str[i + 1] == '\0')
return (0);
}

while (str[i] >= '0' && str[i] <= '9')
{
if (base > INT_MAX / 10 || (base == INT_MAX / 10 && str[i] - '0' > 7))
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
base = 10 * base + (str[i++] - '0');
}
return (base *sign);
}
