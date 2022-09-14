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
		for (i; i <= 10; i++)
			_putchar(abc);
		abc++;
	} while (abc <= 'z');
	_putchar('\n');
}
