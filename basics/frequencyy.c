#include <stdio.h>
#include <string.h>


void freq (strring str)
{
    int i; int j; int occurence = 0;
    for (i = 1 ; i <= str.size() ; i++)
    {
        occurence = 0;
        for (j = i+1 ; j<=str.size ; j++)
        {
            
            if(str[i] == str[j])
            {
                printf("%c",str[i]);
                printf(" : ");
                printf("%d" , occurence++);
            }
        }
    }
}

int main ()
{
    string str;
    printf("Please enter string");
    scanf("%s" , &str);

    freq(str);

    return 0;
}