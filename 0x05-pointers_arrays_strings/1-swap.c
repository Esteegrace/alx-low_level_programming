#include "main.h"
/**
 * swap_int - Swap the values of two integers a and b
 * @n: A pointer to an int that will be updated
 * @b: A pointer to an int that will be updated
 *
 * Return: void that means our answer is correct
 */

void swap_int(int *a, int *b)
{
	int f;
	f = *a; 
	*a = *b;
	*b = f;
}
