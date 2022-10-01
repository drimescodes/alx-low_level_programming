#include "main.h"
/**
* _memset - Fills the first n bytes of the memory area pointed to by s
* with the constant byte b, fills a buffer with a constant for a specified size
* @s: This is the buffer to be filled
* @b: This is the char that will be used to fill buffer
* @n: This is the no of bytes to fill in the memory array of s
* Return: a pointer to the memory area (s)
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
