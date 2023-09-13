#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - function
 * @argc: parameter
 * @argv: parameter
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
	{
		int numone, numtwo;
		char *op;


		if (argc != 4)
		{
			printf("Error\n");
			exit(98);
		}


		numone = atoi(argv[1]);
		op = argv[2];
		numtwo = atoi(argv[3]);


		if (get_op_func(op) == NULL || op[1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}


		if ((*op == '/' && numtwo == 0) ||
		    (*op == '%' && numtwo == 0))
		{
			printf("Error\n");
			exit(100);
		}


		printf("%d\n", get_op_func(op)(numone, numtwo));


		return (0);
	}
