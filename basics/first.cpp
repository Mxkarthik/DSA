#include <iostream>
#include <vector>
using namespace std;

void check_number(int value , int size , vector <int> array)
{
    bool condition = true;
    for ( int i = 0 ; i < size ;i++)
    {
        if (array[i] == value)
        {
            condition = true;
            cout<<"The Value exists in the array";
            return;
        }

        else 
        {
            condition = false;
        }
    }
    if (!condition)
    {
        cout<<"The value doesnt exist";
    }
}
int main()
{
    cout<<"Please Enter the target element in the array:";
    int x; cin>>x;
    int size; cout<<"Please Enter the size of the array"; cin>>size;

    vector <int> array(size);
    cout<<"Please Enter the value in the array";
    for (int i = 0 ; i < size ;i++)
    {
        cin>>array[i];
    }
    check_number(x,size,array);
    return 0;
}