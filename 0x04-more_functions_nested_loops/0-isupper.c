#include "main.h"
/**
* _isupper - check if @c is lowercase
* @c: variable to check if is lowercase
* Return: 1 if c is lowercase fi 0..
*/

/* Function Defination - @_isupper */

int _isupper(int c)
{
	int i;

	i = 0;

	if (c >= 'A' && c <= 'Z')
	{
		i = 1;
	}
	return (i);
}