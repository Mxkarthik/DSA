#include <iostream>
#include <vector>
using namespace std;

void elements(vector<int>array , int size , int index)
{
    //base case 
    if (index == size) return ;

    // self work 
    cout<<array[index]<<endl;
    // assumption 
    elements(array , size , index+1);
    

}

void inputelements (vector <int> &array , int size , int index)
{
    // base case 
    if ( index == size) return ;

    // self work
    cin>>array[index];
   

    // assumption
    inputelements(array , size , index+1); 
}

int main()
{
    int size;
    cout<<"Please Enter the size of the array"<<" "<<endl;
    cin>>size;
    cout<<"Please Enter the elements in the array"<<" "<<endl;
    vector <int> array (size);
  
    int index = 0;
    inputelements(array , size , index);
    cout<<"Here are the elements of the array"<<" "<<endl;
    elements(array,size,index);
    return 0;
}