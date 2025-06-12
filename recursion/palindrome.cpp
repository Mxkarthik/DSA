#include <iostream>
using namespace std;
bool palindrome (int number , int * temp )
{
    // base case :
    if ( number >= 0 && number <= 9)
    {
        int lastdigitoftemp = (*temp) % 10;
        (*temp)/10;
        return ( number == lastdigitoftemp);
    }

    // recursion approach 
    bool result = ( palindrome (num/10, temp) && (num % 10) == (*temp) % 10);
    (*temp)/=10;
    return result;
}
int main()
{
    cout<<"Please Enter the Number to find if it is palindrome or not:";
    int number; cin>>number;

    int temp = number ;

    int result = palindrome(number , & temp);

    ((result == 1) ? "The Given Number is palindrome" : "The given Number is not palindrome");

    return 0;
}