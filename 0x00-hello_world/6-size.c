#include <stdio.h>
#include <stdlib.h>

/**
 * main -A program that print the size of various computer types
 * Return:(0) Always
 *
 */

int main(void)
{
    printf("Size of char: %zu bytes:", sizeof(char));
    printf("Size of int: %zu bytes:", sizeof(int));
    printf("Size of long int: %zu bytes:", sizeof(long int));
    printf("Size of long long int: %zu bytes:", sizeof(long long int));
    printf("Size of float: %zu bytes:", sizeof(float));

    return (0);
}
