#include <iostream>
using namespace std;

long long exponent (long long base , long long n , long long mod)
{
    if( n == 0) return 1;
    // now we have to check if the number is even or odd 
    if ( n % 2 == 0)
    {
        // even case 
        long long half = exponent(base , n/2 , mod);
        long long result = (half * half) % mod;
        return result;
    }
    else
    {
        // odd case 
        long long half = exponent(base , (n-1)/2 , mod);
        long long result = (half * half ) % mod;
        result = (result *(base % mod))% mod;
        return result;
    }
}

int main ()
{
    long long base , n , mod= 1e9+7;
    cin>>n;
    long long exp = exponent( 1378 , n, 10); int last_digit = exp % 10;
    cout<<last_digit;
    return 0;
}