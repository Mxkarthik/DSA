#include <iostream>
using namespace std;

int sum (int array[] , int size )
{
    int sum = 0;
    for (int i = 0 ; i < size ; i++)
    {
        sum += array[i];
    }
    return sum;
}


int main()
{
    int array[] = {3,4,10,11};
    int size = (sizeof(array)/sizeof(array[0]));

   int addition = sum(array, size);
   cout<<addition;
    return 0;
}