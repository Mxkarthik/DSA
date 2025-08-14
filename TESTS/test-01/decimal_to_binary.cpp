#include <iostream>
using namespace std;

void decimal_to_binary (int number)
{
    int result = 0;
    int i = 0;
    while (number > 0)
    {
        result += number % 2;
        i++;
    }
    cout<<result;
}

int main ()
{
    int number; cin>>number;
    decimal_to_binary(number);
    return 0;
}

