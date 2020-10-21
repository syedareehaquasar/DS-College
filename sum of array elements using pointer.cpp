#include <stdio.h>

int main()
{
	printf("\n\n Syeda Reeha Quasar \n 14114802719 \n\n\n");
	int array[100], n, i, *ptr, sum = 0;
	
	printf("Enter no. of Elements of array: \n");
	scanf("%d", &n);
	
	printf("\nEnter %d numbers: \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	ptr = array;
	
	for (i = 0; i < n; i++)
	{
		sum += *ptr;
		ptr++;
	}
	
	printf("Sum of numbers is %d \n", sum);
	return 0;
}
