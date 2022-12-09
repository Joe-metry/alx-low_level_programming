#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0'; /*initialize num to 0*/
	char letter = 'a'; /*initialize letter to a*/

	while (num <= '9') /*Print 0-9*/
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f') /*Print a-f*/
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
