#include <stdio.h>

void electric_bill ()
{

}

int main ()
{
    int units;
    float bill;

    printf("Enter total units consumed:");
    scanf("%d",&units);
    if (units <= 100)
        bill = units * 1.50; // each unit costs is 1.50 for 100 units it will turn out to be 150
    else if (units <= 200)
        bill = (100 * 1.50) + (units - 100) * 2.00;
    else if (units <=300)
        bill = (100 * 1.50) + (100*2.00) + (units-200) * 3.00;
    else
        bill = (100*1.50) + (100*2.00) + (100*3.00) + (units-300) * 4.00;

    printf("Electricity bill =Rs.%.2f",bill);
}