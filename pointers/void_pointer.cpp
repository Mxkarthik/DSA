#include <iostream>
using namespace std;

int main ()
{
    float x = 2.0;
    int y = 2;

    void *ptr = &x;

    float *floatpointer = (float*)ptr;
    cout<<*floatpointer<<"\n";
    return 0;
}