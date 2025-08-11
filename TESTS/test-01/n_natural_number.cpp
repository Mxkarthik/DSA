#include <iostream>
using namespace std;

int sum_of_natural_number (int number)
{
    int sum = 0;
    for (int i = 0 ; i <= number ; i++ )
    {
        sum += i;
    }
    return sum;
}
int main ()
{
    cout<<"Please Enter the number the number you want to print the sum :"<<endl;
    int number;
    cin>>number;

    int result = sum_of_natural_number(number);
    cout<<result;
    return 0;
}