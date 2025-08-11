#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector <string> original = {"B1" , "B2" , "B3"};

    cout<<"The input original array :"<<endl;

    for (int i = 0 ; i < original.size() ; i++)
    {
        cout<<original[i]<<endl;
    }
    
    vector <string> temp;
    vector <string> target;


   // Moving B3 to target
    target.push_back(original[2]);
    original.pop_back();

    // moving B2 to temp

    temp.push_back(original[1]);
    original.pop_back();

    // moving B3 to Temp from target

    temp.push_back(target[0]);
    target.pop_back();

    // moving B1 to Target from original
    target.push_back(original[0]);
    original.pop_back();

    // moving B3 to original from temp
    original.push_back(temp[1]);
    temp.pop_back();

    // moving B2 to target from temp
    target.push_back(temp[0]);
    temp.pop_back();

    // moving B3 to target from original
    target.push_back(original[0]);
    original.pop_back();

    cout<<"The elements after modification"<<endl;
    cout<<"The elements in the original array :"<<endl;

    if (original.size()==0)
    {
        cout<<"No Elements in the original array";
    }
    for (int i = 0 ; i < original.size() ; i++)
    {
        cout<<original[i]<<endl;
    }

    cout<<"The elements in the temp array :"<<endl;

    if (original.size()==0)
    {
        cout<<"No elements in temp array";
    }
    for (int i = 0 ; i < temp.size() ; i++)
    {
        cout<<original[i]<<endl;
    }

    cout<<"The elements in the target array :"<<endl;

    for (int i = 0 ; i < target.size() ; i++)
    {
        cout<<target[i]<<endl;
    }

    return 0;
}