#include <iostream>
#include <vector>
using namespace std;

void unique(vector <int> &array , int size)
{
    int unique_term = 0 ;
    for (int i = 0 ; i < size ; i++)
    {
        for (int j = i+1 ; j < size ; j++)
        {
            if (array[i] == array[j])
            {
                array[i]=array[j]=-1;
            }
        }
    }
    
}

int main()
{
    int size;
    cout<<"Please Enter the size of the Vector"<<" "<<endl;
    cin>>size;

    vector <int> array (size);
    cout<<"Please Enter the elements in the Vector"<<" "<<endl;
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }

    unique(array,size);
    cout<<"the unique element in the given vector is :"<<" "<<endl;
    for (int k  =0 ; k < size ; k++)
    {
        if (array[k] > 0)
        {
            cout<<array[k];
        }
    }
    return 0;
}

// this has time complexity of 0(n2) 
// the space comeplexity is 0(1)
// the best methods that can reduce the time compelxity is by using XOR method and bit sum method or hashmap 