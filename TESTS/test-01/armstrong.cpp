#include <iostream>
using namespace std;

bool check_armstrong (int number , int size)
{
    /* 
        Armstrong number is a number in which a digit in a number 
        is is raised to the power of no of digits is called armstong number 
    */
   if (number == 0)
       return true;

    if (number < 0)
       return false;

    int last_digit = 0;
    int multipliyer = size;
    int result = 0;
    while (number > 0)
    {
        last_digit = number % 10;
        number = number / 10;

        result += last_digit*multipliyer;
    }

    if (number == result)
        return true;
    
}

int main ()
{
    int number;
    cout<<"Please enter the number "<<endl;
    cin>>number;

    int size;
    cout<<"Please enter the size of the number"<<endl;
    cin>>size;
    check_armstrong(number,size);

    // checking if the number is armstrong
    if(check_armstrong)
    {
        cout<<"Yes the number is armstrong";
    }
    else
    {
        cout<<"No the number is not armstrong";
    }
    return 0;
}