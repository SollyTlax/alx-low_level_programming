#include <unistd.h>
/**
 * main - Write a program that prints _putchar
 * followed by a new line.
 * The program should return 0
 *
 * Return: 0
 */
int main(void) 
{
	const char message[] = "_putchar\n";

	write(STDOUT_FILENO, message, sizeof(message) - 1);
	return (0);
}
