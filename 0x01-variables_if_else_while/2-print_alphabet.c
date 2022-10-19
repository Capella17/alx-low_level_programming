#include <stdio.h>

/**
  * main - print the letters of the alphabet
  * description: print the letters of the alphabet
  * Return: always 0 (success)
  */

int main(void)
{
	int letter = 97;

	while (letter < 123)
	{
		putchar(letter);
		letter++;
	}
	putchar(10);

	return (0);
}
