#include <stdio.h>

void lower_case (char ch)
{
    char start = 'a';
    char end = 'z';
    if ( ch >= start &&  ch<= end)
    {
        printf("Yes the entered character is an lowercase");
    }
    else
    {
        printf("No the entered character is not a lower case");
    }
}

int main ()
{
    char ch;
    printf("Please enter the character :");
    scanf("%c" , &ch);

    lower_case(ch);

    return 0;
}

