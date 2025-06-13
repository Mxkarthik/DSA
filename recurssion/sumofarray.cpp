#include <iostream>
#include <vector>
using namespace std;

int sum(vector <int> array , int size , int idx)
{
    // base case : the sum of the array will be itself when it has only one element in it
    int addition_of_ele = 0;
    if (idx == size-1) return array[idx];

    addition_of_ele = array[idx]+(sum(array , size ,idx+1));
    return addition_of_ele;

}

int main ()
{
    cout<<"Please enter the size of the array :"<<" "<<endl;
    int size;
    cin>>size;
    cout<<"Please enter the elements in the array"<<" "<<endl;
    vector <int> array(size);
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
 
    
    int idx =0;
    int sum_of_ele = sum(array , size , idx);
    cout<<sum_of_ele;
    return 0;
}