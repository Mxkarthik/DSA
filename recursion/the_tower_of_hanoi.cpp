#include <iostream>
#include <string>
using namespace std;

/*
   This code works when the smallest disk is 1
*/

void tower_of_hanoi (int number , string source, string helper , string destination)
{
    //base case :
    if (number == 1)
    {
        cout<<"transfer disk "<<number <<"from "<<source<< "to " << destination<<"\n"; 
        return;
    }
    
    // step 1 :
    tower_of_hanoi(number-1 , source , destination , helper);

    // step 2 :
    cout<<"transfer disk "<<number<<" from "<<source<<" to " << destination<<"\n";

    // step 3 :
    tower_of_hanoi(number-1 , helper , source , destination);
}
int main()
{
    int number;
    cout<<"Please enter the number of dics :";
    cin>>number;

    string S = "Source";
    string H = "Helper";
    string D = "Destination";
    tower_of_hanoi(number,S,H,D);

    return 0;
}
