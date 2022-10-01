#include "main.h"

/**
* _isdigit - this function checks for digits ASCII characters
* @c: this is an ASCII integer
* no dull me
* Return: 1 if a digit, else 0
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
