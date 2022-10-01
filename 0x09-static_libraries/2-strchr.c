#include "main.h"
#include <stddef.h>

/**
* _strchr - This finds the first occurence of a char in a string
* @s: The string to be searched
* @c: The character the be found
* Return: Pointer to the first occurence of the char or null
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\n'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (NULL);
}
