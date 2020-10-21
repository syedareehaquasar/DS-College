#include <stdio.h>

int main()
{
	printf("\n\n Syeda Reeha Quasar \n 14114802719 \n\n\n");
	int array[100], n, i, j, l, m, z;
	
	printf("Enter no. of Elements of array: \n");
	scanf("%d", &n);
	
	printf("\nEnter %d numbers: \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	int largest = array[0];
	for (i = 0; i < n; i++)
	{
		int sum = 0;
		for (j = i; j < n; j++)
		{
			sum += array[j];
			if (sum > largest)
			{
				m = i;
				l = j;
				largest = sum;
			}
		}
	}
	
	printf("\n Largest contiguous subarray is: \n");
	for (z = m; z <= l; z++)
	{
		printf("%d \n", array[z]);
	}
	
	printf("\n The sum of largest contiguous subarray is: \n %d", largest);
	return 0;
}
