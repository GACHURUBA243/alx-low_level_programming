#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <main>

/**
 * main - entry point
 * return: Always 0 (success)
 * return value for main is 0
 */

int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z'; low++)

		putchar(low);
	printf("\n");

	return (0);
}
