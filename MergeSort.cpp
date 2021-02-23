#include <stdio.h>
 
// function to sort the given array
void merge_sort(int i, int j, int givenArr[]) {
    if (j <= i) {
        return;     // the subsection is empty or a single element
    }
    
    int aux[100]; // temp arr for storage
    
    int mid = (i + j) / 2;

    // left sub-array is givenArr[i .. mid]
    // right sub-array is givenArr[mid + 1 .. j]
    
    merge_sort(i, mid, givenArr);     // sort the left sub-array recursively
    merge_sort(mid + 1, j, givenArr);     // sort the right sub-array recursively

    int pointer_left = i;       // pointer_left points to the beginning of the left sub-array
    int pointer_right = mid + 1;        // pointer_right points to the beginning of the right sub-array
    int k;      // k is the loop counter

    // we loop from i to j to fill each element of the final merged array
    for (k = i; k <= j; k++) {
        if (pointer_left == mid + 1) {      // left pointer has reached the limit
            aux[k] = givenArr[pointer_right];
            pointer_right++;
        } else if (pointer_right == j + 1) {        // right pointer has reached the limit
            aux[k] = givenArr[pointer_left];
            pointer_left++;
        } else if (givenArr[pointer_left] < givenArr[pointer_right]) {        // pointer left points to smaller element
            aux[k] = givenArr[pointer_left];
            pointer_left++;
        } else {        // pointer right points to smaller element
            aux[k] = givenArr[pointer_right];
            pointer_right++;
        }
    }

    for (k = i; k <= j; k++) {      // copy the elements from aux[] to a[]
        givenArr[k] = aux[k];
    }
}


int main() {
  int arr[100], n, i; // arr and variable declaration
 
 // taking array size
  printf("Enter number of elements in the array:\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
 // taking arr elements input
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
 
  merge_sort(0, n - 1, arr); // merge sorting
 
  printf("\n\nPrinting the sorted array:\n");
 
 // printing sorted array
  for (i = 0; i < n; i++)
     printf("%d\n", arr[i]);
 
  return 0;
}
