#include <stdio.h>

void addition (int r1 , int c1 , int r2 , int c2)
{
    int array1 [r1] [c1];
    int array2 [r2] [c2];
    if ( r1 != r2 || c1 != c2)
    {
        printf("This is not a square matrix");
        return;
    }

    // now take elements from the user for array1
    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; j < c1 ; j++)
        {
            scanf("%d" , &array1[i][j]);
        }
    }

    // now take elements from the user for array 2
    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; j < c1 ; j++)
        {
            scanf("%d" , &array2[i] [j]);
        }
    }


    int additionarray [r1] [c1];

    for ( int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; j < c1 ; j++)
        {
            int value = 0;

            value += array1[i][j] + array2 [i] [j];
            additionarray [i] [j] = value;
        }
    }

   // displaying matrix 
   for (int i = 0 ; i < r1 ; i++)
   {
        for (int j = 0 ; j < c1 ; j++)
        {
            printf("%4d" ,additionarray[i] [j]);
        }
        printf("\n");
   }
}


int main ()
{
    int row1; int col1; int row2 ; int col2;
    printf("Please enter the row of the matrix1 \n");
    scanf("%d" ,&row1);
    printf("Please enter the coloumn of the matrix1 \n"); 
    scanf("%d" , &col1); 
    printf("Please enter the row of the matrix2 \n");
    scanf("%d" , &row2);
    printf("Please enter the col of the matrix2 \n");
    scanf("%d" , &col2);
    addition(row1,col1 , row2 , col2);
    return 0;
}