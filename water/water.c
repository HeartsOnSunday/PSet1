#include <stdio.h>
#include <cs50.h>

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
