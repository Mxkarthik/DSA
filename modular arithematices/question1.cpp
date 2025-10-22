// what is the reminder when 2 power 20 + 11 power 7 + 4 power 40 + 3 power 30 + 5 power 50 is divided by 7
#include <iostream>
using namespace std;

long long calculate_exponents (long long base , long long exponent , long long mod)
{
    if ( exponent == 0) return 1;

    // now we have to write case for even and odd 
    if ( exponent % 2 == 0)
    {
        // even case 
        long long half = calculate_exponents(base , exponent/2 , mod);
        long long result = (half * half) % mod;
        return result;
    }
    else
    {
        // odd case
        long long half = calculate_exponents(base, (exponent-1)/2 , mod);
        long long result = (half * half) % mod;
        result = (result * (base % mod)) % mod;
        return result;
    }
}

long long inverse (long long base , long long exponent , long long mod)
{
    return calculate_exponents(base,exponent,mod);
}
long long division (long long inverse_of_a , long long base , long long mod)
{
    return (inverse_of_a % mod * base % mod ) % mod;
}
long long addition (long long t1 , long long t2 , long long t3 , long long t4 , long long t5 , long long sum , long long mod)
{
    return(t1 % mod + t2 % mod + t3 % mod + t4 % mod + t5 % mod) % mod;
}

int main ()
{
    long long sum , t1 , t2 , t3 , t4 , t5;
    long long base , exponent , mod = 7;
    t1 = calculate_exponents( 2 , 20 , mod);
    t2 = calculate_exponents( 11 , 7 , mod);
    t3 = calculate_exponents( 4 , 40 , mod);
    t4 = calculate_exponents( 3 , 30 , mod);
    t5 = calculate_exponents( 5 , 50 , mod);
    sum = addition(t1,t2,t3,t4,t5,sum , mod);
    long long inverse_of_a = inverse( sum , mod-2 , mod);
    long long final = division(inverse_of_a , base , mod);
    cout<<"the final result after modulo division :"<<final;
    return 0;
}