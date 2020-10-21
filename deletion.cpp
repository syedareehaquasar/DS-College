#include <stdio.h>

int main()
{
	// variables declaration
	int array[100], i, n, m, p, flag;
	// my details
	printf("\n\n Syeda Reeha Quasar \n 14114802719\n group - C7 \n\n");
	// size of the array
	printf("\n Enter the size of array: \n");
	scanf("%d", &n);
	
	// array elements
	printf("\n Enter %d array elements: \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	//deletion details
	printf("\n Which element you want to delete ? \n\n");
	scanf("%d", &m);
	
	flag = 0;
	
	// finding the element
	for (i = 0; i < n; i++)
	{
		if (array[i] == m)
		{
			flag = i;
			break;
		}
	}
	
	// checking if element is found or not
	if (flag != 0)
	{
		n = n - 1;
		
		for (p = flag; p < n; p++)
		{
			array[p] = array[p + 1];
		}
		
		for (i = 0; i < n; i++)
		{
		printf(" %d ", array[i]);
		}
		
		printf("\n");
	}
	// printing not found if element is not there
	else
	{
		printf("\n Element was not found in the array \n");
	}
	
	return 0;
}
