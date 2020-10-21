#include <stdio.h>

int main()
{
	printf("\n\n Syeda Reeha Quasar \n 14114802719 \n\n\n");
	int array[100], n, i;
	float sum = 0.0, avg;
	
	printf("Enter no. of Elements of array: \n");
	scanf("%d", &n);
	
	printf("\nEnter %d numbers: \n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
		sum += array[i];
	}
	
	avg = sum / n;
	printf("Sum of numbers is %f \n average of numbers is %f \n", sum, avg);
	return 0;
}
