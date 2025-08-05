#include <stdio.h>

// Operator Priority
/*
    In c the rule of mathematics such as bodomus is not applicable 
    the method called opearation preceding is used 

    Priority                    Operators
       1st                          * / %
       2nd                            + -
       3rd                             =   


    operators of highest priority are evaluted first in the absence of paranthesis

    operator Associativity :
    when operators of equal priority are present in an expression , the tie is 
    taken care of by associativity

    example :
    x * y / z => (x*y)/z
    x / y * z => (x/y)*z
    
    *,/ follows left to right associativity
*/



int main()
{
    int x = 2; int y = 3;

    printf("The value of 3*x - 8*y is %d", 3*x - 8*y);
    printf("The value of 8*y / 3*x is %d", 8*y / 3*x);

    return 0;
}