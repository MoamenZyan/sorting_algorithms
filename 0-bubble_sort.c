#include "sort.h"

/**
 * bubble_sort - bubble sort function
 * @array: the passed array
 * @size: size of the array
 * Return: Void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, original = size;

	while (size != 0)
	{
	i = 0;

		while (i < size)
		{
			if ((i + 1) < size)
			{
				if (array[i] > array[i + 1])
				{
					tmp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = tmp;
				}
			}
			i++;
		}
		print_array(array, original);
		size--;
	}
}
