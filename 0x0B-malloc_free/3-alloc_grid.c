#include "main.h"

/**
 * alloc_grid - This function retuens a pointer to a 2
 * dimensional array of integers
 * @width: Function parameter 1
 * @height: Function parameter 2
 * Return: 0 or NULL
 */

int **alloc_grid(int width, int height)
{
	int g, h;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (g = 0; g < height; g++)
	{
		gridout[g] = malloc(width * sizeof(int));
		if (gridout[g] == NULL)
		{
			for (g--; g >= 0; g--)
			free(gridout[g]);
			free(gridout);
			return (NULL);
		}
	}
	for (g = 0; g < height; g++)

		for (h = 0; h < width; h++)
			gridout[g][h] = 0;

	return (gridout);
}
