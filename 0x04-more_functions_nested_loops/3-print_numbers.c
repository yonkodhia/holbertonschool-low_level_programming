#include "holberton.h"
/**
  * print_numbers - Entry Point
  * Return: 0 (Success)
  */
void print_numbers(void)
{
	int i = 0;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
