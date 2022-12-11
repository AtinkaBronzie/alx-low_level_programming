#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Write a program that prints the alphabet in lowercase.
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
