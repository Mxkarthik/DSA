#include <stdio.h>
#include <math.h>

void calculator (float n)
{
    ( (n - floor(n) < 0.5) ? printf("%.0f",floor(n)) : printf("%.0f" ,ceil(n)));
}

int main ()
{
    float n; scanf("%f", &n);
    calculator(n);
    return 0;
}