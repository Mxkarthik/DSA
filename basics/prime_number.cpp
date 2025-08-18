#include <iostream>
using namespace std;

void prime_number (int a , int b)
{
    int occurence = 0;

    for (int value = a ; value <= b ; value++)
    {
        bool isPrime = true;
        // base case :
        if ( value < 2)
        {
            isPrime = false;
        }

        for (int i = 2 ; i * i <= value ; i++)
        {
            if (value % i == 0)
            {
                isPrime = false;
                break;
            }
        }


        if (isPrime)
        {
            cout<<value<<" "<<"The number is a prime number"<<endl;
            occurence++;
        }
    }

    cout<<"The total no of prime number in the range of " << a << " and "<< b << " is "<<occurence<<endl;
}

int main ()
{
    int a;
    int b;
    cout<<"Please enter the value of a :"<<endl;
    cin>>a;
    cout<<"Please enter the value of b :"<<endl;
    cin>>b;

    prime_number(a,b);
    return 0;
}