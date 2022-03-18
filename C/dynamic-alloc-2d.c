/*
 * Dynamically allocate 2D array.
 */

/* row = no. of rows
   col = no. of cols  

   fixed size array of 4 rows and 4 colums
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int row = 4;
    int col = 4;

    int *temp = malloc((row * col) * sizeof(int));

    for(int i = 0; i < row; i++)
    {
        for(int j = 0 ; j < col; j++)
        {
            temp[j] = j + 1 + i;
            printf("%d ",temp[j]);
        }
        printf("\n");
    }
    free(temp);
}