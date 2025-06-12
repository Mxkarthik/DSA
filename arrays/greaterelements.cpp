#include <iostream>
#include <vector>
using namespace std;


int greternumbers(const vector<int> &array , int &size , int &element)
{
    int occurence = 0;
    for (int i =0  ; i < size ; i++)
    {
        if(array[i] > element)
        {
            occurence++;
            
        }
    }
    return occurence;

}
int main()
{

    int size;
    cout<<"Please Enter the size of the Array"<<" "<<endl;
    cin>>size;
    vector <int> array(size);
    cout<<"Please Enter the Elements in the Vector :"<<" "<<endl;
    for (int i =0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    int element;
    cout<<"Please Enter the Number that you want :"<<" "<<endl;
    cin>>element;

  

    cout<<"Here are the number of elements that are greater then the given Number :"<<" "<<endl;
   cout<< greternumbers(array,size,element);
    return 0;
}