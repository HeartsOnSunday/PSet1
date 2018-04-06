#include <stdio.h>
#include <cs50.h>

//Do While loop!
int main(void)
{
    int minutes;
    int bottles = 12;

    do
    {
        minutes = get_int("Minutes: ");
    }
    while (minutes <= 0);
    {
        printf("%i\n", minutes * bottles);
    }

}
