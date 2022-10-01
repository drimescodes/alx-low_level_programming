#include "main.h"
/**
* _strcat - this function concatenates one string with another
* @dest: destination string
* @src: String to be concatenated
* Return: The destination string
*/
char *_strcat(char *dest, char *src)
{
int i;
int destLength = 0;
int counter = 0;

while (dest[counter] != '\0')
{
destLength++;
counter++;
}
for (i = 0; src[i] != '\0'; i++)
dest[destLength + i] = src[i];
dest[destLength + i] = '\0';

return (dest);
}
