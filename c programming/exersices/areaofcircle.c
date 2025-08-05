#include <stdio.h>

void volumeofcylinder(int radius , int height)
{
    float volume = 3.14*(radius*radius*height);
    printf("The value of volume %f" , volume);
}

void areaofcircle (int radius , int height)
{
    float area = 3.14 * radius * height;
    printf("The value of area %f" , area);
}


int main()
{
    int radius;int height;
    printf("Please Enter the value of radius");
    scanf("%d",&radius);
    printf("Please Enter the value of height");
    scanf("%d",&height);

    areaofcircle(radius,height);

    volumeofcylinder(radius,height);
    return 0;
}