#include <iostream>
#include <vector>
using namespace std;

int serch(const vector <int> &array , int size , int target_value)   // cosnt prevents accidental modification // and & avoids copying the vector
{
    for (int i = 0 ; i < size ; i++)
    {
        if(array[i] == target_value)
        {
            return i;
        }
    }

    return -1;
}


int main()
{
    int size;
    cout<<"Please Enter the size of the Array"<<" "<<endl;
    cin>>size;

    vector<int>array(size);

    cout<<"Please Enter the value for the array"<<"  "<<endl;
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];

    }

    int target_value ;
    cout<<"Please Provide the value that you want to check in the Array"<<endl;
    cin>>target_value;
    int target = serch(array,size,target_value);

    if ( target != -1)
    {
        cout<<"Yes the Target Value exist in the given array:"<<" ";
        cout<<target;
    }
    else 
    {
        cout<<"No the Target Value is not exist in the given array";
    }

    
    return 0;
}