#include <stdio.h>
#include <math.h>

void calculator (float val)
{

    (((val-floor(val)) < 0.5 ) ? printf("%.0f" , floor(val)) : printf("%.0f" , ceil(val)));
}
int main ()
{
    float val; scanf("%f",&val);
    calculator(val);
    return 0;
}