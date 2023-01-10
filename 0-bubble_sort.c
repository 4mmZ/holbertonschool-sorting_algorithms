#include "sort.h"
/**
 * bubble_sort -  a function that sorts an array of integers
 * in ascending order using the Bubble sort algorithm
 * @array: array
 * @size: size_t
 */
void bubble_sort(int *array, size_t size)
{
	size_t c1, c2 = 0;
	int aux = 0;

	for (c1 = 0; c1 < size; c1++)
	{
		for (c2 = 0; c2 < size - 1; c2++)
		{
			if (array[c2] > array[c2 + 1])
			{
				aux = array[c2];
				array[c2] = array[c2 + 1];
				array[c2 + 1]  = aux;
				print_array(array, size);
			}
		}
	}
}
