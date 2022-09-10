#include <stdio.h>

/**
 * main - Entry point
 *
 * return: always 0
 *
 * prints alphabet in lowercase
 *
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
