#include <iostream>
using namespace std;

int count = 0;
long long moduloar_exp(long long base , long long exponent, long long modulous)
{
   count += 1;
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
  long long base; cout<<"Please enter the base :"; cin>> base;
  long long exponent; cout<<"Please enter the exponent :"; cin>>exponent;
  long long output = moduloar_exp(base,exponent,1e9+7);
  cout<<"the exponent of the provided a and b :"<<output;
  cout<<"\nThe Number of steps for recurssion :"<<count;
  return 0;
}