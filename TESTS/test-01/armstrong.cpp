#include <iostream>
#include <cmath>
using namespace std;

bool check_armstrong (int number , int size)
{
    /* 
        Armstrong number is a number in which a digit in a number 
        is is raised to the power of no of digits is called armstong number 
    */
   int temp = number;
   if (number == 0)
       return true;

    if (number < 0)
       return false;

    int last_digit = 0;
    int multipliyer = size;
    int result = 0;
    while (number > 0)
    {
        last_digit = number % 10; // taking last digit 
        number = number / 10; // removing last digit

        result += pow(last_digit,size);
    }

    if (temp == result)
    {
        return true;
    }

    return false;
}

int main ()
{
    int number;
    cout<<"Please enter the number "<<endl;
    cin>>number;

    int size;
    cout<<"Please enter the size of the number"<<endl;
    cin>>size;
    int value = check_armstrong(number,size);

    // checking if the number is armstrong
    if(value)
    {
        cout<<"Yes the number is armstrong";
    }
    else
    {
        cout<<"No the number is not armstrong";
    }
    return 0;
}