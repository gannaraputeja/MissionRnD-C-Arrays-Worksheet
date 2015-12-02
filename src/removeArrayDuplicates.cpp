/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

int repeat(int *Arr, int i)
{
	int j;
	for (j = 0; j<i; j++)
		if (Arr[j] == Arr[i])
			return 1;
	return 0;
}

void * removeArrayDuplicates(int *Arr, int len)
{
	int i, j, k = 0;
	if (Arr == NULL)
		return NULL;
	if (len <= 0)
		return NULL;
	for (i = 0; i < len; i++)
	{
		if (repeat(Arr, i) == 1)
			continue;
		Arr[k++] = Arr[i];
	}
}