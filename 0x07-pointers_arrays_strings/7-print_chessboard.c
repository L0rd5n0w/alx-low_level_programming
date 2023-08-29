#include "main.h"
/**
 *print_chessboard -function
 *Return:(0)Always
 *@a :parameter
 */
void print_chessboard(char (*a)[8])
{
	int line;
	int grid;

	for (line = 0; line < 8; line++)
	{
		for (grid = 0; grid < 8; grid++)
		{
			_putchar(a[line][grid]);
		}
		_putchar('\n');
	}
}
