#include <stdio.h>

/*
	 *The __attribute__((constructor))
		is a GCC (GNU Compiler Collection) attribute that is used to specify
		that a function should be executed before the main function of the program.

	In this specific case, the fun()function is defined with this attribute,
		which means that it will be executed automatically when the program is
		executed.
		This is useful for printing messages or performing other initialization tasks
		that need to be done before the main program execution begins.

	The __attribute__((constructor))
		attribute is a GNU extension to the C language and is not part of
		the C standard. However, it is widely supported by many compilers,
		including GCC, and is often used in C programs to perform
		initialization tasks.
*/

void fun(void) __attribute__((constructor));
/**
 * fun - to print the needed output
 *
 * Reuturn: void
*/
void fun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
