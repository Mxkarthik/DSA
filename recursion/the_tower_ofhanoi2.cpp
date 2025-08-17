#include <iostream>
using namespace std;


void the_tower_of_hanoi(int number ,int total_number , string source , string helper , string destination)
{
    //base case :
    if (number == 1)
    {
        int label = total_number - number + 1;
        cout<<"disc "<<label<<"Transferd from "<<source<<" to "<<destination<<endl;
        return;
    }

    // step 1 :
    the_tower_of_hanoi(number-1,total_number,source,destination,helper);
    //step 2 :
    int label = total_number - number+1;
    cout<<"disc "<<label<<"Transferd from "<<source<<" to "<<destination<<endl;

    // step 3 :
    the_tower_of_hanoi(number-1,total_number,helper,source,destination);
}


int main ()
{
    int number;
    cout<<"Please enter the number of the dics :"<<endl;
    cin>>number;
    string S = "source";
    string H = "helper";
    string D = "Destination";
    the_tower_of_hanoi(number,number,S,H,D);
    return 0;
}