#include "main.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
	int last;
	last = c % 10;

	if (last < 0)
	{
		last *= last * -1;
	}
	_putchar(last + '0');
	return (last);
}

