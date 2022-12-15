#include <stdio.h>

#include "main.c"

/*
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char i;

	printf ("Lower case characters:\n");

	for (i = 'a' ; i <= 'z' ; i++)
		printf ("%c ", i);
	return (0);

}


