#include <stdio.h>


void simple_interest(int amount , int rate_of_interest , int time)
{
    int result = (amount * rate_of_interest * time)/100;
    printf("The value of the result of the simple interest : %d" , result);
}
int main ()
{
    int principal_amount;
    int rate_of_interest;
    int time;

    printf("Please Enter the value of principal of principal amount");
    scanf("%d",&principal_amount);
    printf("Please Enter the value of rate of interest in (%)");
    scanf("%d",&rate_of_interest);
    printf("Please Enter the value of time");
    scanf("%d",&time);
    simple_interest(principal_amount, rate_of_interest, time);
    return 0;
}