#include "main.h"
/**
 * print_triangle - code to check
 * @size: parameter
 * Return: (0)
 */
void print_triangle(int size)
{
	int i;
	int c;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
	for (c = 0; c < size; c++)
	{
	if (c < size - (i + 1))
	{
		_putchar(' ');
	}
	else
	{
		_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
