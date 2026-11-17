#include <stdio.h>

int main()
{
    float n=100.00;
    float sum=0.00;

    for(float i = 1; i <= n; i++)
    {
        sum = sum + 1/i;
    }

    printf("Harmonis sum is = %.2f\n\n",sum);

    return 0;
}