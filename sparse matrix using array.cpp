#include<stdio.h>

int main(){
	// my info
	printf("\n\n Name - Syeda Reeha Quasar \n Roll No. - 14114802719 \n Group - 3C7 \n\n");
	
    // sparse matrix of class 5x6 with 6 non-zero values
    int sparseMatrix[5][6] =
    {
        {0 , 0 , 0 , 0 , 9, 0 },
        {0 , 8 , 0 , 0 , 0, 0 },
        {4 , 0 , 0 , 2 , 0, 0 },
        {0 , 0 , 0 , 0 , 0, 5 },
        {0 , 0 , 2 , 0 , 0, 0 }
    };

    // Finding total non-zero values in the sparse matrix
    printf("Sparse Matrix used:\n");
    int size = 0;
    for (int row = 0; row < 5; row++) {
        for (int column = 0; column < 6; column++) {
        	printf(" %d ", sparseMatrix[row][column]);
            if (sparseMatrix[row][column] != 0) {
                size++;
        	}
    	}
    	printf("\n");
	}

    // Defining result Matrix
    int resultMatrix[3][size];

    // Generating result matrix
    int k = 0;
    for (int row = 0; row < 5; row++)
        for (int column = 0; column < 6; column++)
            if (sparseMatrix[row][column] != 0)
            {
                resultMatrix[0][k] = row;
                resultMatrix[1][k] = column;
                resultMatrix[2][k] = sparseMatrix[row][column];
                k++;
            }

    // Displaying result matrix
    printf("\n\nTriplet Representation : \n");
    for (int row=0; row<3; row++) {
    	if (row == 0) {
			printf("row   ");
		}
		else if (row == 1) {
			printf("column");
		}
		else {
			printf("value ");
		}
        for (int column = 0; column<size; column++) {
            printf(" %d ", resultMatrix[row][column]);
		}
        printf("\n");
    }
    
    return 0;
}
