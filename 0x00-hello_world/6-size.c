#include <stdio.h>
#include <stdlib.h>
/**
 * main -A program that print the size of various computer types
 * Return:(0) Always
 *
 */
int main(void)
{

    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of long int: %zu byte(s)\n", sizeof(long int));
    printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    return (0);
}
