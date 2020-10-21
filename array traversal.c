#include <stdio.h>

int main()
{
	// declaring variables
	int array[100], i, n, m;
	
	//personal information
	printf("\n\n Syeda Reeha Quasar \n 14114802719\n group - C7 \n\n");
	
	//declaring and asking for size of array
	printf("\n Enter the size of array: \n");
	scanf("%d", &n);
	
	//asking the number which you want to multiply the elements with
	printf("\n Enter the number you want to multiply all array elements with\n\n");
	scanf("%d", &m);
	
	// storing array elements
	printf("\n Enter %d array elements: \n", n);
	for (i =0; i< n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	// printing the array after traversal
	for (i = 0; i < n; i++)
	{
		printf(" %d ", array[i]*m);
	}
}
