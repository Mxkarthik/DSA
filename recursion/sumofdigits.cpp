#include <iostream>
using namespace std;


int sumofdigits (int number)
{
    // base case : when we have only one number then the sum of the number will be itself
    if ( number >=0 && number <= 9) return number;

    // recursive code 

    int sum_digits = 0;
    sum_digits = sumofdigits(number/10) + number%10;
    // number % 10 -> last digit 
    // number/10 -> sum of number after removing the last number 
    return sum_digits;

}
int main()
{
    cout<<"Please Output enter the number that you want to find the sum of :";
    int number;
    cin>>number;
    int idx = 0;
    int sum = sumofdigits(number);
    cout<<"The Sum of the digits in the Number :";
    cout<<sum;
    return 0;
}