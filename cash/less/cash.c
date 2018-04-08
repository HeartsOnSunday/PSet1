#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float change;

    do
    {
        change = get_float("Ammount of Change: ");

    }
    while(change <=0);
    {
        printf("%f\n", change);
    }
}