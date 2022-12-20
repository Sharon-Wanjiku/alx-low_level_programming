#include <stdlib.h>
#include <stdio.h>
/**
 * main-entry point.
 * Description- prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
