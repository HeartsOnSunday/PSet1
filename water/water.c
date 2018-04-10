#include <stdio.h>
#include <cs50.h>
/*
PRNG
It might be worth explaining the formula a bit, though I do like that 12 was saved to variable. Very useful if it was expanded or changed in future
Similar to mario, the formatting of the code contained in brackets below the do/while loop make it seem like a do, followed by a while loop. It would be useful to remove brackets and put that print in-line with restss
*/
//Do While loop!
int main(void)
{
    int min;
    int bot = 12;

    do
    {
        min = get_int("Minutes: ");
    }
    while (min <= 0);
    {
        printf("%i\n", min * bot);
    }

}
