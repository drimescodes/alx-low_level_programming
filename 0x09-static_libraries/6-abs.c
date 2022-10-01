#include "main.h"
/**
* _abs - function Computes the absolute value of the integer passed
* @n: is an integer, a real number
* Return: Absolute Value
*/
int _abs(int n)
{
if (n > 0)
return (n);
else if (n < 0)
return (n * -1);
else
return (0);
}
