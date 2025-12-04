#include <stdio.h>

struct student 
{
    char name[50];
    int roll;
    float marks;
};

int main ()
{
    struct student S;
    printf("Enter the Roll Number\n");
    scanf("%d",&S.roll);
    printf("Enter the name\n");
    scanf("%s",S.name);
    printf("Enter the marks\n");
    scanf("%f",&S.marks);


    printf("Students detils : \n");
    printf("Roll Number : %d\n",S.roll);
    printf("Name : %s\n",S.name);
    printf("Marks : %f\n",S.marks);

    return 0;
    
}