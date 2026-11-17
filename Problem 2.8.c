#include <stdio.h>

int main()
{
    float x,y;
    int z;

    printf("Enter the two float numbers = ");
    scanf("%f %f",&x,&y);

    z = x + y;
    printf("Sum of %.2f and %.2f is = %d",x,y,z);

    return 0;
}