#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort - sort an array by quick method
 * @array: array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (array && size > 1)
		quicky(array, 0, (size - 1), size);
}

/**
 * quicky - sort an partition recursively by quick method
 * @array: array to sort
 * @bot: inferior limit of the partition
 * @top: superior limit of the partition
 * @size: size of the array
 */

void quicky(int *array, size_t bot, size_t top, size_t size)
{
	size_t piv;

	if (bot < top)
	{
		piv = partition(array, bot, top, size);
		if (piv > 0)
			quicky(array, bot, (piv - 1), size);
		if (piv < top)
			quicky(array, (piv + 1), top, size);
	}
}

/**
 * partition - generate a partition of an array
 * @array: array to make partition
 * @bot: inferiror limit of the array
 * @top: superior limit of the array
 * @size: size of the array
 * Return: the posistion of the piv
 */

size_t partition(int *array, size_t bot, size_t top, size_t size)
{
	int pivot, aux;
	size_t i, j;

	pivot = array[top];
	i = bot;
	for (j = bot; j < top; j++)
	{
		if (array[j] <= pivot)
		{
			aux = array[j];
			array[j] = array[i];
			array[i] = aux;
			if (i != j)
				print_array(array, size);
			i = i + 1;
		}
	}
	aux = array[top];
	array[top] = array[i];
	array[i] = aux;
	if (top != i)
		print_array(array, size);
	return (i);
}
