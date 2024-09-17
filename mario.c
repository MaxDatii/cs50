#include <cs50.h>
#include <stdio.h>

void print_row(int spaces, int bricks);

int main(void)
{
    // Prompt the user for pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1); // repeat if the height is less than 1

    // Print the pyramid of required height
    for (int i = 0; i < n; i++)
    {
        // Print row of bricks
        print_row(n - i - 1, i + 1); // passing spaces and bricks to print_row
    }
}

void print_row(int spaces, int bricks)
{
    // Print spaces (dots in this case for right alignment)
    for (int i = 0; i < spaces; i++)
    {
        printf(".");
    }

    // Print bricks (hashes)
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }

    // Move to the next line after printing each row
    printf("\n");
}