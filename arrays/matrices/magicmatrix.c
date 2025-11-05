#include <stdio.h>

void solution (int row , int col)
{
    int matrix [row] [col];int magictotal=0; int d1 = 0; int d2 =0;
    
    if (row != col)
    {
       printf("This is not a square matrix. Magic matrix only works for square matrices.\n");
       return;
    }
    // inputs
    for (int i = 0 ; i < row ;i++)
    {
        for (int j = 0 ; j< col ;j++)
        {
            scanf("%d" , &matrix[i][j]);
        }
    }
    // checking for magic total 
    for (int i = 0 ; i < row ; i++)
        magictotal += matrix[0][i];
    
    // checking total for each row
    for (int i = 0 ; i<row ;i++)
    {
        int total = 0;
        for(int j = 0 ; j < col ;j++)
        {
            total += matrix[i][j];
        }
        if(total != magictotal)
        {
            printf("This is not a magic matrix");
            return;
        }
    }

    // checking total for each column
    for (int i = 0 ; i < row ; i++)
    {
        int total = 0;
        for(int j = 0 ; j < col ; j++)
        {
            total+= matrix[j][i];
        }
        if(total != magictotal)
        {
            printf("This is not a magic matrix");
            return;
        }
    }

    // checking total for diagonals 
    for (int i = 0 ; i < row ;i++)
    {
        d1 += matrix[i][i];
        d2 += matrix[i][row-i-1];
    }
    if((d1 != magictotal) || (d2 != magictotal))
    {
        printf("This is not a magic matrix");
    }
    
    printf("This is a magic matrix");
}

int main ()
{
    int row; int col;
    printf("Please enter the row size");
    scanf("%d",&row);
    printf("Please enter the row size");
    scanf("%d",&col);
    solution(row,col);
    return 0;
}