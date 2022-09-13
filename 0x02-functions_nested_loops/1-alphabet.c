<<<<<<< HEAD
#include "studio.h"
=======
#include "main.h"

>>>>>>> 0e7f1354bf72fea838dc35a3892af9dd2277109b
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
