#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    int *ptrx = &x;

    cout<<ptrx<<endl;
    
    ptrx += 1;

    cout<<ptrx<<endl;

    return 0;
}