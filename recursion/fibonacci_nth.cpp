#include <iostream>
using namespace std;

int nth_fibo(int n )
{
    //base case :
    if ( n == 0) return 0;
    if (n ==1 ) return 1;

    int result = nth_fibo(n-1) + nth_fibo(n-2) ;
    return result;
}

int main()
{
    cout<<"Please Enter the value of n";
    int n;
   int fibo_nth =  nth_fibo(n);
   cout<<fibo_nth;
   return 0;
}
