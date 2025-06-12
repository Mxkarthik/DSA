#include <iostream>
#include <vector>
using namespace std;

int uniqueXOR(vector <int> array , int size)
{
    int result = 0;
    for (int ele : array)
    {
        result ^= ele; 
    }

    return result;
}


int main()
{
    int size;
    cout<<"please enter the size of the vector :"<<" "<<endl;
    cin>>size;

    vector<int> array(size);
    cout<<"please enter the elements in the array"<<" "<<endl;
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }

    int unquie_element = uniqueXOR(array,size);
    cout<<"here is the unique element in the array"<<" "<<endl;
    cout<<unquie_element;

    return 0;
}