#include <iostream>
using namespace std;


f(int n)
{
    //base case :
    if (n == 1 || n == 0 ) return 1;

    int result = n * f(n-1);

    return result;

}


int main()
{
    cout<<"Please Emter the number that you want to find factorial of :";
    int n;
    cin>>n;

   int factorial =  f(n);
   cout<<factorial;
    return 0;
}

