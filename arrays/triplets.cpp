#include <iostream>
#include <vector>
using namespace std;



int triplets(vector<int> &array , int size , int target_sum)
{
    int triplets_count = 0;
    for (int i = 0 ; i < size ; i++)
    {
        for (int j = i+1 ; j < size ; j++)
        {
            for(int k = j+1 ; k< size ; k++)
            {
                if (target_sum == array[i]+array[j]+array[k])
                {
                    triplets_count++;
                }
            }
        }
    }

    return triplets_count;
}


int main()
{

    int size;
    cout<<"Please Enter the Size of the Vector"<<" "<<endl;
    cin>>size;

    vector<int> array(size);
    cout<<"Please Enter the Elements in the Vector"<<" "<<endl;
    for (int i = 0 ; i < size ; i++)
    {
        cin>>array[i];
    }
    int target_sum;
    cout<<"Please Enter the target_sum :"<<" "<<endl;
    cin>>target_sum;

    int triplets_sum =triplets(array,size , target_sum);

    cout<<"The Number of Triplets of the sum :"<<" "<<endl;
    cout<<triplets_sum;
    return 0;

}