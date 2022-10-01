#include "main.h"
/**
* _strncat - Concatenates one string to another
* @dest: Destination string
* @src: String to be concatenated
* @n: number of bytes to be copied
* Return: The destination string
*/
char *_strncat(char *dest, char *src, int n)
{
int i;
int destlen = 0;
int counter = 0;

while (dest[counter] != '\0')
{
destlen++;
counter++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
dest[destlen + i] = src[i];
dest[destlen + i] = '\0';

return (dest);
}
