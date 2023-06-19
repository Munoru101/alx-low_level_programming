#include <unistd.h>

/**
 * write function is used from the unistd.h header
 * to write the desired message to the standard error
 * that is file descriptor 2
 * Return 1 to indicate an error
 */
int main(void)
{	
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
