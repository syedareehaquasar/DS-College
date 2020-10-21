#include <stdio.h>

int main()
{
	// variables declaration
	int array[100], i, n, m, p;
	// my details
	printf("\n\n Syeda Reeha Quasar \n 14114802719\n group - C7 \n\n");
	// size of the array
	printf("\n Enter the size of array: \n");
	scanf("%d", &n);
	
	// array elements
	printf("\n Enter %d array elements: \n", n);
	for (i =0; i< n; i++)
	{
		scanf("%d", &array[i]);
	}
	
	//insertion details
	printf("\n Enter the no. / element you want to insert\n\n");
	scanf("%d", &m);
	printf("\n Enter the position you want to insert it at\n\n");
	scanf("%d", &p);
	
	// increasing the size of the array
	n = n + 1;
	
	//moving all elements after position entered one place forward
	for (i = n; i >= p; i--)
	{
		array[i] = array[i - 1];
	}
	
	//placing the lement m at p position
	array[p] = m;
	
	for (i = 0; i < n; i++)
	{
		printf(" %d ", array[i]);
	}
	printf("\n");
	
	return 0;
}
