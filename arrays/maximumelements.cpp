#include <iostream>
using namespace std;

int maximum(int array[4])
{
    int max = array[0];
    for (int i = 0 ; i < 4 ; i++)
    {
        if ( max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int main()
{
    int array[4];
    for (int i = 0 ; i < 4 ; i++)
    {
        cin>>array[i];
    }
   cout<<  maximum(array);
   return 0;

}

// space and time complexity analaysis 

// time complexity 
// loop is from 0 -> 4 => 0,1,2,3 that mean four itterations
// in the above array the size is 4 so it's O(4) , but we generalize it to O(n) i.e n =4
// o(n) is linear Time complexity that means the time increases proportinonal to the input size


// space complexity
// int max = array[0] -> uses constant space -> O(1) , so no extra space used inside maximum()
// O(1) is a constant Space Complexity it takes constant space 