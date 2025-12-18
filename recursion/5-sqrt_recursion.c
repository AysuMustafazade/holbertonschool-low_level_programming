#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root of a number
 * If n does not have a natural square root, the function should return -1
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: value of x raised to the power of y
 *         -1 if y is less than 0
 */
 int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
int _sqrt_recursion(int n)
{  
	if (_pow_recursion(n, 1/2) >= 0)
	{	return (_pow_recursion(n, 1/2));

    }else 
	{	return (-1);
    }
	return (_pow_recursion(n, 1/2));   
}
