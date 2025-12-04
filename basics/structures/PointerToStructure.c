#include <stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main ()
{
    struct Student s1;
    struct Student *ptr;
    ptr = &s1;
    ptr->roll = 19;
    ptr->marks = 50.0;

    printf("roll %d \n" , ptr->roll);
    printf("marks %f \n" , ptr->marks);
    return 0;
}