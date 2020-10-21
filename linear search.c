#include <stdio.h>

int main()
{
	int array[100], i, n, search;
	printf("\n\n Syeda Reeha Quasar \n 14114802719 \n group - C7\n\n");
	printf("\n Enter the size of array: \n");
	scanf("%d", &n);
	
	printf("\n Enter %d array elements: \n", n);
	for (i =0; i< n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	printf("\n Enter the element you want to search via Linear Search \n");
	scanf("%d", &search);
	
	for (i = 0; i < n; i++)
	{
		if (array[i] == search)
		{
			printf("Found the %d at %d", search, i+1);
			break;
		}
		if (i == n)
		{
			printf("%d not found in the array", search);
		}
	}
	return 0;
}
