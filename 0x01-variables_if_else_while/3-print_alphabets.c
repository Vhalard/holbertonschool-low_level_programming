#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	char a;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	for (a = 'A'; a <= 'Z'; a++)
	putchar(a);
	putchar('\n');
	return (0);
}
