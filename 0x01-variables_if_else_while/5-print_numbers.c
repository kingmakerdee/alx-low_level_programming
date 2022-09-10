#include <stdio.h>

/**
 * main - entry point
 *
 * Return:always 0
 *
 * print single digit numbers in base 10
 *
 */
int main(void)
{
	int a = 0;

	for (; a < 10 ; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
