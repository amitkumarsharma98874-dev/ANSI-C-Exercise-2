#include<stdio.h>

int main()
{
    float n;
    int paise;
    printf("Enter Price in Decimal number = ");
    scanf("%f",&n);

    paise = n*100;

    printf("%.2f Rupees = %d Paise.",n,paise);


    return 0;
}