#include <unistd.h>
/**
 * _putchar - Write the character c to standard output
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is return and error is there returned 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
