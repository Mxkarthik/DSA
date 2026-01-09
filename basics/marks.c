#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) { 
    if (argc < 3) {
        printf("Usage: %s <name> <Marks1> <Marks2> ... <MarksN>\n", argv[0]);
        return 1;
    }

    // Student name
    char *name = argv[1];

    // Calculate total
    int total = 0;
    for (int i = 2; i < argc; i++) {
        total += atoi(argv[i]);
    }

    // Display result
    printf("Student Name: %s\n", name);
    printf("Total Marks: %d\n", total); 
    return 0;
}
