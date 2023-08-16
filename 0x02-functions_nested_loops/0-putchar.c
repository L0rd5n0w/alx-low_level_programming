#include <unistd.h>
#include "main.h"
/**
 *_putchar -code to print function to print _putchar
 *@c: a parameter to take in a character
 *Return: (0) Always
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
	return (0);
}
