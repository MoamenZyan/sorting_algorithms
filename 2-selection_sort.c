#include "sort.h"

/**
 * selection_sort - Selection sorting function
 * @array: passed array
 * @size: size of the array
 * Return: Void
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp, index;
	int min;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				index = j;
			}
		}
		if (i == size - 1)
		{
			break;
		}
		if (array[i] != min)
		{
			tmp = array[i];
			array[i] = min;
			array[index] = tmp;
			print_array(array, size);
		}
	}
}
