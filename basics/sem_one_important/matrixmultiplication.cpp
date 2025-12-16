#include <iostream>
using namespace std;

void matrixmultipliaction ()
{
    int result [100] [100] ;

    int array[100][100];
    int array2[100][100];

    int r1 , r2; int c1 , c2;
    printf("Please enter the r1 and c1 ");
    scanf("%d",&r1);
    scanf("%d",&c1);

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    printf("Please enter the r2 and c2 ");
    scanf("%d",&r2);
    scanf("%d",&c2);
      for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; i < c1 ; i++)
        {
            for (int k = 0 ; i < c2 ; i++ )
            {
                result[i][j] += array[i][k] * array2[k][j];
            }
        }
    }

    for (int i = 0 ; i < r1 ; i++)
    {
        for (int j = 0 ; i < c1 ; i++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

}

int main ()
{
    matrixmultipliaction();
    return 0;
}