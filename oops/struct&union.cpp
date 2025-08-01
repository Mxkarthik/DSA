#include <iostream>
using namespace std;


struct ExampleStruct {
    int intvar;
    float floatvar;
    char str[20];
};

union ExampleUnion {
    int intvar;
    float floatvar;
    char str[20];
}
int main()
{
    ExampleStruct e1;
}