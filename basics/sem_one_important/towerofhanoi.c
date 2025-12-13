#include <stdio.h>

void tower_of_hanoi(int n, char source, char temp , char target)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n",source,target);
        return;
    }
    tower_of_hanoi(n-1,source,target,temp);

    printf("Move disk %d from %c to %c\n",n,source,target);

    tower_of_hanoi(n-1,temp,source,target);
}

int main ()
{
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    tower_of_hanoi(n,'A','B','C');
    return 0;
}