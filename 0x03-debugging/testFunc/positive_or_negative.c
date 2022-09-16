#include <stdio.h>

/**
* positive_or_negative - check @i <=> 0 is true/false then do something
* @i: int variable
*
* Return: void
*/

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
