#include <iostream>
#include <vector>
using namespace std;

void sorted(vector<int> &array , int size)
{
    //using bubble sort algorithm to arrange the array in the accesnding order
    for (int i = 0 ; i < size-1 ; i++)
    {
        bool swapped = false;
        for (int j = 0 ; j < size - i -1 ; j++)
        {
            if (array[j] > array[j+1])
            {
                swap(array[j],array[j+1]);
                swapped = true;
            }
        }
        if (!swapped) 
        {
            break;
        }
    }

}
int main()
{
    int size;
    cout<<"please enter the size of the vector : "<<" "<<endl;
    cin>>size;

    vector <int> array(size);
    cout<<"Please Enter the elments in the Vector "<<" "<<endl;
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    cout<<"Here is the Orginal Array without sorting"<<" "<<endl;
    for (int i   = 0 ; i < size ; i++)
    {
        cout<<array[i];
    }
    cout<<endl;
    
    sorted(array , size);
    cout<<"Here is the original Array with Sorting"<<" "<<endl;
    for (int i =0 ; i < size ; i++)
    {
        cout<<array[i];
    }
    return 0;
}