#include "main.h"
/**
* print_alphabet_x10 - Call _putchar function to print @abc to stdout
*
* Return: Void.
*/

void print_alphabet_x10(void)
{
	char abc = 'a';
	int i = 1;

	do {
		while (abc <= 'z')
		{
			_putchar(abc);
		}
		_putchar('\n');
		i++;
	} while (i <= 10);
}
