#include <stdio.h>

void checkvowel(char ch)
{
    int flag = 0;
    char chararray[10] = {'a','e','i','o','u','A','E','I','O','U'};
    for (int i = 0 ; i < 10 ; i++)
    {
        if(chararray[i] == ch)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("The entered character is a vowel");
    }
    else
    {
        printf("The entered character is not a vowel");
    }

}

int main ()
{
    char ch;
    printf("Please enter the character :");
    scanf("%c" , &ch);
    checkvowel(ch);
    return 0;
}