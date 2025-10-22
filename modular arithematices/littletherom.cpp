// this therom is used to find inverse of the number and calculate division since in modular arthematics relms its differnt 
#include <iostream>
using namespace std;

long long mod_inv ( long long base , long long exponent , long long mod)
{
    if(exponent == 0) return 1;

    // we have to check whether the exponent is even or odd 
    if ( exponent % 2 == 0)
    {
        long long half = mod_inv(base , exponent/2 , mod);
        long long result  = (half * half) % mod;
        result %= mod;
        return result;
    }
    else
    {
        // this is odd case 
        long long half = mod_inv(base, (exponent-1)/2 , mod);
        long long result = (half * half) % mod;
        result = ( result * ( base % mod)) % mod;
        return result;
    }
}

long long division ( long long inverse , long long base , long long mod)
{
    long long divison_of_mod = (base % mod * inverse % mod);
    return divison_of_mod;
}

int main ()
{
    long long  mod = 7;
    long long exponent = mod-2;
    long long inverse = mod_inv (4,exponent,mod);
    long long division_of_modulo = division(inverse , 2 , 7);
    cout<<"the division of the both number is "<<division_of_modulo;
    return 0;
}

