#include <stdio.h>
#include "main.h"

/**
 * main - prints  name of the programu
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: Always 0 (Success) , 1 (fail)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
