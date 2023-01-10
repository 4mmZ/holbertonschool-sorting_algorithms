#include "sort.h"
/**
 * selection_sort - In a function that sorts an array of
 * integers in ascending order using the Selection sort algorithm
 * @array: array
 * @size: size_t
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min = 0;
	int aux = 0;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			aux = array[i];
			array[i] = array[min];
			array[min] = aux;
			print_array(array, size);
		}
	}
}
