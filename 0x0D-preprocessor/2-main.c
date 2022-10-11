#include <stdio.h>

#define FILE_NAME __FILE__

/**
*main - print the name of the file the program is compiled from.
*Return: Alw
*/

int main(void)
{
	printf("%s\n", FILE_NAME);
	return (0);
}
