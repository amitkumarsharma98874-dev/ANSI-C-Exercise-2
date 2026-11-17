#include <stdio.h>

int main()
{
    float a,b,div;

    printf("Enter the two float numbers = ");
    scanf("%f%f",&a,&b);
    
    div = a/b;

    printf("%.2f/%.2f = %.2f",a,b,div);

    return 0;
}