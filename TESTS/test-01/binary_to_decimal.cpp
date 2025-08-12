#include <iostream>
using namespace std;

void binary_to_decimal (int binary)
{
    int i = 0; int last_number = 0;int sum = 0;
    int new_number = 0; int multiplier = 1;
    while(binary > 0)
    {
        last_number = binary % 10;
        new_number = binary/10;
        binary = new_number;
        sum += last_number * multiplier;
        multiplier *=2;
        i++;
    }

    cout<<sum;
}

int main ()
{
    cout<<"Please Enter the binary number you want to convert ."<<endl;
    int binary; cin>>binary;

    cout<<"The decimal no :"<<endl;
    binary_to_decimal(binary);

    return 0;
}