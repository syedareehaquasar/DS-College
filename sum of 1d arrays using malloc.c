#include <stdio.h>

int main()
{
	printf("\n\n Syeda Reeha Quasar \n 14114802719 \n\n\n");
	int n, i;
	
	printf("Enter no. of Elements of array: \n");
	scanf("%d", &n);
	
	int *a, *b, *c;
	
	a = (int*)malloc(n*sizeof(int));
	printf("\n Enter elements of array 1: \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", a+i);
	}
	
	b = (int*)malloc(n*sizeof(int));
	printf("\n Enter elements of array 2: \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", b+i);
	}
	
	c = (int*)malloc(n*sizeof(int));
	for (i = 0; i < n; i++)
	{
		*(c+i) = *(a+i) + *(b+i);
	}
	
	printf("Sum of the entered 2 1D arrays are: \n");
	for (i = 0; i < n; i++)
	{
		printf("%d \n",*(c+i));
	}
	
	return 0;
}
