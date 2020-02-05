#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sort an array by selection
 * @array: the array to sort
 * @size: size of the @array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, p;
	int aux;

	if (array)
	{
		for (i = 0; i < (size - 1); i++)
		{
			aux = array[i];
			for (j = (i + 1); j < size; j++)
			{
				if (aux > array[j])
				{
					aux = array[j];
					p = j;
				}
			}
			if (aux != array[i])
			{
				array[p] = array[i];
				array[i] = aux;
				print_array(array, size);
			}
		}
	}
}
