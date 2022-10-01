#include "main.h"
/**
* _memcpy - Fills a buffer with a constant for a specified size
* @dest: This is the buffer to be filled
* @src: This is the char that will be used to fill buffer
* @n: This is the no of bytes to fill in the memory array of dest
* Return: returns dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
