#include <iostream>
#include <vector>
using namespace std;


int sum(vector<int> &array , int size)
{
    int even_sum = 0;
    int odd_sum = 0;
    int differnce;
    for (int i = 0 ; i < size ; i++)
    {
        if(array[i] % 2 == 0)
        {
            even_sum++;
        }
        else
        {
            odd_sum++;
        }
    }
    differnce = (even_sum - odd_sum);
    return differnce;
}
int main()
{
    int size;
    cout<<"Please Enter the size of the Vector: "<<" "<<endl;
    cin>>size;

    cout<<"Please Enter Your Elements in The Vector:"<<" "<<endl;
    vector <int> array(size);
    for (int i =0 ; i < size ; i++)
    {
        cin>>array[i];
    }

    int difference_btw = sum (array, size);

    cout<<difference_btw;
    return 0;

}