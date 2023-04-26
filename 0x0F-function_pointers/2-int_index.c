#include <stdio.h>
#include "function_pointers.h"

/**
 * Function that searches for an integer
 * @array: array
 * @size: the number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * @int_index: returns the index of the first element for which the cmp function does not return 0
 * if no element matches, return -1
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if(array == NULL || size <=0 || cmp == NULL)
		return (-1);

	for(i=0;i<size;i++)
	{
		if(cmp(array[i]))
			return (i);
	}
	return (-1);
}

