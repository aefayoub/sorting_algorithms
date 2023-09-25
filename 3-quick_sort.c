#include "sort.h"

/**
 * quick_sort - function that sorts an array
 * of integers in ascending order using the
 * quick sort algorithm
 *
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */
void quick_sort(int *array, size_t size)
{
	_quick_sort(array, 0, size - 1, size);
}

/**
 * _quick_sort - function that sorts an array
 * of integers in ascending order using the
 * quick sort algorithm
 *
 * @arr: input arrray
 * @low: index of the first element
 * @high: index of the last element
 * @size: size of the array
 * Return: array
 */
void _quick_sort(int *arr, int low, int high, int size)
{
	int p, w, i;
	int tmp;

	if (low < high)
	{
		p = high;
		w = low;
		for (i = low; i < high; i++)
		{
			if (arr[i] < arr[p])
			{
				if (i != w)
				{
					tmp = arr[i];
					arr[i] = arr[w];
					arr[w] = tmp;
					print_array(arr, size);

				}
				w++;
			}
		}
		if (w != p && arr[w] != arr[p])
		{
			tmp = arr[w];
			arr[w] = arr[p];
			arr[p] = tmp;
			print_array(arr, size);
		}
		_quick_sort(arr, low, w - 1, size);
		_quick_sort(arr, w + 1, high, size);
	}
}
