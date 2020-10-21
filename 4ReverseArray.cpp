#include<stdio.h>

int main()
{
	printf("\n\n Syeda Reeha Quasar \n 14114802719 \n\n\n");
	int n, i, array[100];
	printf("\n Enter the size of array you want to input: \n");
	scanf("%d", &n);
	
	printf("\nEnter %d array elements: \n", n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	for (i = (n-1); i >= 0; i--)
	{
		printf("\n %d \n", array[i]);
	}
	return 0;
}
