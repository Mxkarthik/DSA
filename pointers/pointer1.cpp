#include <iostream>
using namespace std;

int main ()
{
    int x = 30;
    int *ptr = &x;
    *ptr = 1000;
    cout<<ptr;

}


/*
explanation of the above code is 
1. first we can take any data type and declare a variable according to it 
and then we can define a ptr which store the memory address of the variable using & operator 
and then we use dereferencing operator and assign the value 100 to it 
and then we print the value of the variable 
*/