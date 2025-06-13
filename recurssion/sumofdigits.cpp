#include <iostream>
using namespace std;

int sum(int number)
{
    // base case : 
    if ( number >= 0 && number <=9 ) return number;
}
int main()
{
    int number;
    cin>>number;
    int digits_sum = sum(number);
    cout<<digits_sum;
    return 0;

}

