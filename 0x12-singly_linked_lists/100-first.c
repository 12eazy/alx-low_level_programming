#include <stdio.h>

void first(void) _attribute_ ((constructor));

/**
 * first - prints a sentence before themain
 * function is executed
 */
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
