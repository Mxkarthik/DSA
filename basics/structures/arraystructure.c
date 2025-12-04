#include <stdio.h>
#include <string.h>


struct student 
{
    int age;
    char name[50];
};

int main ()
{
    struct student students[3];
    
    students[0].age = 20;
    strcpy(students[0].name ,"Karthik");

    students[1].age = 35;
    strcpy(students[1].name , "swathi");

    students[2].age = 54;
    strcpy(students[2].name , "Venkat");
    
    printf("Student 1 : %d %s ", students[0].age, students[0].name);

    return 0;
}
