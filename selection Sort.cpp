#include <stdio.h> // req lib
  
// function for swapping
void swap(int *xp, int *yp){ // swapping x and y pointers using 3 variable approach
    int temp = *xp;
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionSort(int arr[], int n) { 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) { 
        min_idx = i; // Finding the minimum element in unsorted array 
        for (j = i+1; j < n; j++) {
          if (arr[j] < arr[min_idx]) 
            min_idx = j;
    	}
    	
        swap(&arr[min_idx], &arr[i]);   // Swap the found minimum element with the first element 
    } 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int arr[100], n, i; // arr and variable declaration
 
 // taking array size
  printf("Enter number of elements in the array:\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
 // taking arr elements input
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
 
  selectionSort(arr, n); // selection sorting
 
  printf("\n\nPrinting the sorted array:\n");
 
 // printing sorted array
  for (i = 0; i < n; i++)
     printf("%d\n", arr[i]);
 
  return 0;
} 
