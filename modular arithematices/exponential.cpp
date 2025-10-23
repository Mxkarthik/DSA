#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long moduloar_exp(long long base , long long exponent, long long modulous)
{
   if ( exponent == 0 )
   {
    return 1;
   }

   if ( exponent % 2 == 0 )
   {
      long long half = moduloar_exp(base , exponent/2 , modulous);
      long long result = (half * half) % modulous;
      return result;
   }
   else
   {
     long long half = moduloar_exp(base , (exponent-1)/2 , modulous);
     long long result = (half * half) % modulous;
     result = (result * (base % modulous)) % modulous;
     return result;
   }
}

int main ()
{ 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n; // number of test cases

    while (n--)
    {
        long long base, exponent;
        cin >> base >> exponent;

        cout << moduloar_exp(base, exponent, MOD) << "\n";
    }
  return 0;
}