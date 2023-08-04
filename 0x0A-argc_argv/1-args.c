#include <stdio.h>
#include <stdlib.h>
/**
 * main - write a programme that prints anumber of arguments passed into it
 * @argc: number of argument
 * @argv: array of pointer to the arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
