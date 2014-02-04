/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int global;

int main ()
{
    int local = 5;
    void *p = malloc(128);

    printf ("Address of main is %p\n", main);
    printf ("Address of global is %p\n", &global);
    printf ("Address of local is %p\n", &local);
    printf ("Address of p is %p\n", p);

    void *test = malloc(8);
    print_address(test);

    int i = 3;
    int j = 10;
    void *first = malloc(sizeof(i));
    void *second = malloc(sizeof(j));
    print_address(first);
    print_address(second);
    return 0;
}

int print_address( variable ){
	printf("Address of variable is %p\n", &variable);
}