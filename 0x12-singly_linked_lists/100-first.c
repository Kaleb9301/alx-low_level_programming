#include <stdio.h>

/**
 * startup - Apply the constuctor attribute to startup() so that
 * exute before main()
 */
void startup(void) __attribute__((constructor));

/**
 * startup - implementation of startup
 */
void startup(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
