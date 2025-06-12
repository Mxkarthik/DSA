#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;

    cin>>x; cin>>y;

    x = x ^ y;
    y = x ^ y;
    x = x ^ y ;

    cout<<x<<endl;
    cout<<y;

    return 0;
}

// XOR = Exclusive OR
//  its a bitwise operator , which means it works on binary bits (os and 1s).
// the table for the XOR table (truth table):
// BIT 1       BIT 2       BIT1^BIT2
//  0            0             0
//  0            1             1
//  1            0             1       
//  1            1             0
// 
// as we observed in the above section that the truth table of XOR about 
// the bitwise operator returns '1' only when the bits are different
// the bitwise operator returns '0' only when the bits are same
// 

// lets see an example 
// int a = 5;
// int b = 3;
// int c = a^b;

// lets break this:

//               0101 (5)
//               0011 (3)
//             --------------
//               0110 (6)
//             ---------------

// How to convert binary number to Decimal Number 
//  Binary : 0     1     1      0
//  Place  : 2^3   2^2   2^1   2^0
//  place value :  8     4     2      1
// Now we have to mutiply the place value with the Binary digit in it's place 
// 0x8 = 0 , 1x4 = 4, 1x2 = 2 , 0x1 = 0
// now Add all the digits : 0+4+2+0 = 6 
// so the binary digits represents 6 (decimal number)


// XOR PROPERTIES (very useful)
// Property                                                      Meaning
//  a ^ a = 0                                                 Same number XORed gives 0
// a ^ 0 = a                                                  XOR with 0 keeps number same 
// a ^ b = b^a                                                commutative (order doesn't matter)
// (a^b) ^ c = a^(b^c)                                        Associative (grouping doesn't matter)

// this properties of XOR makes very useful for tricks and algortims 