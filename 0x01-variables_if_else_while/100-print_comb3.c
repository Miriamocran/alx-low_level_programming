#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print numbers from 00 to 99
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '8')
	{
		while(j <= '9')
		{
			putchar(i);
			putchar(j);
			if (j == '9' && i == '8')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		if (j >= '9')
		{
			j = '3';
		}
		i++;
	}
	return (0);
}
