#include <stdio.h>


void CentiToFaranheit(int centi , int *Pointer_Faranheit)
{
    *Pointer_Faranheit = (centi * 1.8) + (32) ;
    printf("The value of Faranheit is : %d",*Pointer_Faranheit);
}

int main()
{
    int Centi;
    int Faranheit;
    
    printf("Enter the vaue of centi");
    scanf("%d",&Centi);
    
    int *Pointer_Faranheit = &Faranheit;

    CentiToFaranheit(Centi , Pointer_Faranheit);

    return 0;
}