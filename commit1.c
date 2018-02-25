#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Process
{

	int pid,at,bt;
};
void swap1(double *xp,double *yp)
{
	double temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(double arr[],int arr1[] ,int n)
{
	int i, j;
	int min_idx;
	for (i = 0; i < n-1; i++) 
	{
		min_idx = i;
		for (j = i+1; j < n; j++) 
		if (arr[j] < arr[min_idx])
		min_idx = j;
		swap1(&arr[min_idx], &arr[i]);
		swap(&arr1[min_idx], &arr1[i]);
	}
}

