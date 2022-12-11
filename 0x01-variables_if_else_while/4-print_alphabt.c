#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both except e and q 
 *
 * return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'a'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
