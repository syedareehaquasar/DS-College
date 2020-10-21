#include<stdio.h>

int main()
{
	printf("\n\n Syeda Reeha Quasar \n 14114802719 \n\n\n");
	int n, i, sum = 0, array[100];
	printf("\nEnter the no. of numbers you want to add: (n): \n");
	scanf("%d", &n);
	
	printf("\nEnter %d numbers: \n", n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
		sum += array[i];
	}
	printf("\n Sum is %d \n", sum);
	return 0;
}
