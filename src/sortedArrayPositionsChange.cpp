/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, j = 0, temp, k = 0, f = 0;
	if (Arr == NULL)
		return NULL;
	if (len <= 0)
		return NULL;

	for (i = 0; i < len - 1; i++)
	{
		if (Arr[i]>Arr[i + 1])
		{
			if (f == 1)
				k = i + 1;
			if (f == 0)
			{
				j = i;
				f = 1;
			}
		}
	}
	temp = Arr[j];
	Arr[j] = Arr[k];
	Arr[k] = temp;
	return Arr;
}