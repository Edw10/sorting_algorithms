#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - implements the bubble method to sort
 * @array: the set of numbers to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int is_sorted = 1, aux = 0;
	size_t i;

	while (is_sorted)
	{
		is_sorted = 0;
		for (i = 0; i <= (size - 2); i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
				is_sorted = 1;
			}
		}
	}
}
