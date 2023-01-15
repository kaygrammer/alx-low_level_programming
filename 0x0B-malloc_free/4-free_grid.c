#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free_grid
 * Return: grid
 * @grid: first string
 * @height: second string
*/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
