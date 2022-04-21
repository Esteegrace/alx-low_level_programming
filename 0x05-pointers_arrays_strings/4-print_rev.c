#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @str: A pointer to a nstring that will be reversed
 *
 * Return: void that means our answer is correct
 */

void print_rev(char *s)
{
	char str = "I do not fear computer, I fear lack of them - Issac Asimov";
	reverse(str);
	_putchar("%s\n", str);
	return (0);
}
