#include <iostream>
using namespace std;

void swap(int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}


int main()
{
    int x ; int y;
    cin>>x>>y;

    int *p1 = &x;
    int *p2 = &y;

    swap(p1, p2);

    cout<<x<<endl<<y;
    return 0;
}