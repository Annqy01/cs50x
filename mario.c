#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // Prompt the user for the pyramid's height
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    // Loop through each row
    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        // Print hashes
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // Move to the next line after printing each row
        printf("\n");
    }
}
