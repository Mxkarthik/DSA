#include <iostream>
#include <vector>
using namespace std;

int pairsum(vector<int> &array , int size , int targetsum)
{
    int occurence = 0;
    for (int i = 0; i < size ; i++)
    {
        for(int j = i+1 ; j < size ; j++)
        {
            if(targetsum == array[i] + array [j])
            {
                occurence++;
            }
        }
    }
    return occurence;
}
int main()
{
    int size;
    cout<<"Please Enter the size of the Vector :"<<" "<<endl;
    cin>>size;

    vector <int> array(size);
    cout<<"please Enter the Elements in the array :"<<" "<<endl;
    for(int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }

    int targetsum;
    cout<<"please enter your target sum :"<<" "<<endl;
    cin>>targetsum;
    int pairs = pairsum(array,size,targetsum);
    cout<<"Here is the total number of pairs that are equal to the target sum :"<<" "<<endl;
    cout<<pairs;

}