#include <stdio.h>

void dimensions (int width , int height , int n)
{

    if(n == 0)
    {
        printf("The dimension of the A(%d) : %d mm x %d mm " , n , width , height);
        return;
    }
    if( width > height)
    {
        dimensions(width/2,height,n-1);
    }
    else
    {
        dimensions(width,height/2,n-1);
    }
   
}

int main ()
{
    // given 
    int width = 1189; int height = 841;
    int n; scanf("%d",&n);
    dimensions(width , height , n);
    return 0;
}