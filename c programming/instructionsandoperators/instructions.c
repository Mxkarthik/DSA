#include <stdio.h>
#include <math.h>
/*
    In a program the code is exicuted line by line 
*/
int main()
{
    int a = 4,b,c; // Type declaration instruction
    a = b = c;
    printf("The value of a %d \n",a);
    printf("The value of b %d \n",b);
    printf("The value of c %d \n",c);
    
    float x = 1.1;
    float y = x + 8.9;
    printf("The value of b: %f \n",y);

    printf("when 5 divides by 2 it returns the reminder as, %d \n" , 5%2);

    printf("When -5 divides by 2 it returns reminder as : %d \n", -5%2);

    printf("When 5 divides by -2 it returns reminder as : %d \n", 5 % -2);

    /*
    the reminder will have the signs of the numerator
    */ 

    // there is no operator to perform exponential in c 

    printf("The value of 4 ^ 5 is  %f \n", pow(2,5)); // this is a double
 
    return 0;
}