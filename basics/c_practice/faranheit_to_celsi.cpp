#include <stdio.h>

int main ()
{
    float faran,celsi;
    printf("please enter the value of faranheit");
    scanf("%f",&faran);
    celsi = (faran-32) * 5/9;
    printf("The value of celsius : %.2f",celsi);
    return 0;
}