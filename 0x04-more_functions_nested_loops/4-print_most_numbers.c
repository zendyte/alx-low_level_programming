#include "main.h"

/**
 * print_most_numbers - print all numbers [0-9] but no 2&4 and then \n
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
