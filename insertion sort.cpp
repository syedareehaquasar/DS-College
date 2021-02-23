#include <math.h> 
#include <stdio.h> 
  
// Function to sort an array using insertion sort
void insertionSort(int arr[], int n){ 
    int i, key, j; // variables
	 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
  
        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        
        arr[j + 1] = key; 
    } 
}
  
int main(){ 
  int arr[100], n, i; // arr and variable declaration
 
 // taking array size
  printf("Enter number of elements in the array:\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
 // taking arr elements input
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
 
  insertionSort(arr, n); // insertion sorting
 
  printf("\n\nPrinting the sorted array via insertion sort:\n");
 
 // printing sorted array
  for (i = 0; i < n; i++)
     printf("%d\n", arr[i]);
 
  return 0;
} 
