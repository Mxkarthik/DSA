#include <iostream>
#include <vector>
using namespace std;

int lastoccurence(const vector <int> &array , int size , int number)
{
    // backtracking
    for (int i = array.size()-1 ; i >= 0 ; i-- )
    {
        if (number == array[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int size;
    cout<<"Please Enter the Size of the Array"<<" "<<endl;
    cin>>size;
    vector <int> array(size);
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    int number;    
    cout<<"Please Enter the Number that you want to find last occurence of :"<<" "<<endl;
    cin>>number;
    int occurence = lastoccurence(array,size,number);
    if (occurence != -1)
    {
        cout<<"yes the element exists in the array and the last occurence is :"<<" "<<endl;
        cout<<occurence;
    }
    else 
    {
        cout<<"No the element that you provided is not available in the provided array"<<" "<<endl;
    }

    return 0;
}


// the space and time complexity of the code written is
// the time complexity : 0(n) this is linear that mean the time of execution increases with the increase in the input 
// the space complexity : 0(1) this is constant that mean the usage of space is constant