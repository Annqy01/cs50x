#include <cs50.h>
#include <stdio.h>

// prompt the user for change owed in cents
int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // calculate quarters

    int quarters = cents / 25;
    cents = cents - (quarters * 25);

    // calculate dimes

    int dimes = cents / 10;
    cents = cents - (dimes * 10);

    // calculate nickels

    int nickels = cents / 5;
    cents = cents - (nickels * 5);

    // calculate pennies

    int pennies = cents / 1;
    cents = cents - (pennies * 1);

    // calculate the total number of coins

    int total_coins = quarters + dimes + nickels + pennies;

    // print the total number of coins

    printf("%i\n", total_coins);
}
