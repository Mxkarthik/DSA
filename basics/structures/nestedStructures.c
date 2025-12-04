#include <stdio.h>

struct address 
{
    char city[20];
    int pin;
};

struct student {
    char name[50];
    struct address a;
};

int main ()
{
    struct student S = {"Ravi" , {"Hyd", 500012}};
    printf("Name : %s\n",S.name);
    printf("City : %s\n",S.a.city);
    printf("Pin : %d\n",S.a.pin);

    return 0;
}