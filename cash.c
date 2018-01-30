#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //change var
    float change;

    //obtain amount of change
    do
    {
        printf("How much change?: ");
        change = get_float();
    }
    while (change < 0.0 || change > 100.00);



     // determine quaters
    int quarters = 0;
    do
    {
        if (change > 0.249)
        {
        quarters++;
        change = change - 0.25;
        }
    }
    while (change > 0.249);

    //determine dimes
    int dimes = 0;
    do
    {
        if (change > 0.099)
        {
        dimes++;
        change = change - 0.10;
        }
    }
    while (change > 0.099);

    //determine nickels
    int nickels = 0;
    do
    {
        if (change > 0.049)
        {
        nickels++;
        change = change - 0.05;
        }
    }
    while (change > 0.049);

    int pennies = 0;
    do
    {
        if (change > 0.009)
        {
        pennies++;
        change = change -0.01;
        }
        else (change = 0);
    }
    while (change > 0.009);

    printf("quarters %d", quarters);
    printf("\n");

    printf("dimes %d", dimes);
    printf("\n");

    printf("nickels %d", nickels);
    printf("\n");

    printf("pennies %d", pennies);
    printf("\n");


    //print total coins
    int total = (quarters+dimes+nickels+pennies);
    printf("Total coins: %d", total);
    printf("\n");

}
