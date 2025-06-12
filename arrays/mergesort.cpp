// merge sort or also called as divide an conqure technique used dividing and then sorting and rearranging an array is called merge sort algorithm

#include <iostream>
#include <vector>
using namespace std;



int main()
{
    int size;
    cout<<"Please Enter the size of the vector:"<<" "<<endl;
    cin>>size;

    vector<int> array(size);
    cout<<"Please Enter the Elements of the vector"<<" "<<endl;
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    cout<<"this is the original Vector:"<<" "<<endl;
    for (int i =0 ; i < size ; i++ )
    {
        cout<<array[i];
    }
    cout<<endl;
}