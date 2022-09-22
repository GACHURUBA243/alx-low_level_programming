#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
 * main - prints if number is positive,zero or negative
 * return: Always (success)
 */

int main() 
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is negative\n", n);
	}
	return (0); /*using return value in main ends the program*/
}
