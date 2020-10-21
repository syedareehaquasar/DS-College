#include <stdio.h>

int main()
{
	printf("\n\n Syeda Reeha Quasar \n 14114802719 \n\n\n");
	int array[100], n, i, sum;
	
	printf("Enter no. of Elements of array: \n");
	scanf("%d", &n);
	
	printf("\nEnter %d numbers: \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	int addition(int *ptr, int n);
	sum = addition(array, n);
	
	return 0;
}

int addition(int *ptr, int n)
{
	int i, total = 0;
	for (i = 0; i < n; i++)
	{
		total += *(ptr + i);
	}
	return total;
}
