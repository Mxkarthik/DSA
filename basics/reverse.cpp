#include <stdio.h>
#include <string.h>

void reverse_string (char str[])
{
    int left = 0;
    int right = strlen(str)-1;

    char temp;

    while (left < right )
    {
        // swap characters
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left ++;
        right --;
    }
}

int main ()
{

    char str[100]; // buffer for input

    printf("Enter a string :");
    fgets(str,sizeof(str),stdin);

    // remove newline from fgets if present
    str[strcspn(str,"\n")] = '\0';

    reverse_string(str);

    printf("reversed string : %s\n" , str);

    return 0;
}