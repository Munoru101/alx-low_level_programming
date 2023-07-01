#include <stdio.h>
/**
 * main - entry function into the program
 * Return: Always 0.
 */
int main(void)
{
 	char alphabet;
	char _Alphabet;
	
	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
                alphabet++;
        }
	_Alphabet = 'A';
	while (_Alphabet <= 'Z')
	{
		putchar(_Alphabet);
		_Alphabet++;
	}
        putchar('\n');
        return (0);
}
