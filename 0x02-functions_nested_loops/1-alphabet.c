#include "main.h"
/**
* main - Call _putchar function to print @abc to stdout
*
* Return: On success 0 else -1.
*/
int main(void)
{
	char abc = 'a';

	do {
		_putchar(abc);
		abc++;
	} while (abc < 'z');
	_putchar('\n');
	return (0);
}
