#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10 starting from 0.
*
* Return: Always 0.
*/
main()
{
	int i = 0;
	int j;

	while (i < 5)
	{
		j = 0;
		while (j < 3)
		{
			printf("2 ");
			j++;
		}
		printf("\n");
		i++;
	}
	return (0);
}
