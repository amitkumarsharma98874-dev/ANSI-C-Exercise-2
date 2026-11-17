#include <stdio.h>

int main()
{
    float rice = 16.75;
    float sugar = 15.00;
    float total = rice + sugar;
    
    printf(" ***LIST OF ITEMS*** \n");
    printf("+----------+-----------+\n");
    printf("|  Item    |  Price   |\n");
    printf("+----------+-----------+\n");
    printf("|  Rice    |  Rs %.2f |\n",rice);
    printf("+----------+-----------+\n");
    printf("|  Sugar   |  Rs %.2f |\n",sugar);
    printf("+----------+-----------+\n");
    printf("|  Total   |  Rs %.2f |\n",total);
    printf("+----------+-----------+\n\n");

    return 0;
}
