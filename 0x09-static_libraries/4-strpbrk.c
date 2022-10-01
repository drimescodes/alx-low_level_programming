#include "main.h"
#include <stddef.h>

/**
* _strpbrk - a function that searches a string for any of a set of bytes
* @s: String to be searched
* @accept: String to be searched for
* Return: The pointer to the first occurence
*/
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}
return (NULL);
}
