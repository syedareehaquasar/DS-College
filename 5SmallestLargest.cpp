#include<stdio.h>

int main()
{
	printf("\n\n Syeda Reeha Quasar \n 14114802719 \n\n\n");
	int n, i, array[100], largest, smallest;
	printf("\n Enter the size of array you want to input: \n");
	scanf("%d", &n);
	
	printf("\nEnter %d array elements: \n", n);
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	largest = smallest = array[0];
	
	for(i = 1 ; i < n ; ++i)
	{
		if (array[i] > largest)
		{
			largest = array[i];
		}
		if (array[i] < smallest)
		{
			smallest = array[i];
		}
	}
	printf("\nThe smallest element is %d\n",smallest);
	printf("\nThe largest element is %d\n",largest);
	
	return 0;
}
