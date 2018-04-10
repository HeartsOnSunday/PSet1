#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float changeDue;
    float changeInDollars;
    int coinsReceived = 0;

    do
    {
        changeDue = get_float("Ammount of Change: ");
    }
    while (changeDue <= 0);
    {
        printf("You are owed: %.2f\n", changeDue);
        //get amount in dollars
        changeInDollars = changeDue * 100;
        printf("You will receive: %.0f cents.\n", changeInDollars);


        while (changeInDollars > 25)    //while (quarters can be used)
        {
            eprintf("Quarters!\n");
            changeInDollars -= 25;  //decrease amount by a quarter
            coinsReceived++;  //increase count
            eprintf("Number of coins you will receive:  %i\n", coinsReceived);
            eprintf("You have %f in change left\n", changeInDollars);

        }
        while (changeInDollars >= 10)   //while (dimes can be used)
        {
            eprintf("Dimes, kids!\n");
            changeInDollars -= 10;  //decrese amount by a dime
            coinsReceived++;  //increase count
            eprintf("Number of coins you will receive:  %i\n", coinsReceived);
            eprintf("You have %f in change left\n", changeInDollars);
        }
        while (changeInDollars >= 5)    //while (nickle can be used)
        {
            eprintf("Nickles, kids!\n");
            changeInDollars -= 5;   //decrese amount by a nickle
            coinsReceived++;  //increase count
            eprintf("Number of coins you will receive:  %i\n", coinsReceived);
            eprintf("You have %f in change left\n", changeInDollars);
        }
        while (changeInDollars > 0)    //while (pennies can be used)
        {
            eprintf("pennies\n");
            changeInDollars -= 1;   //decrese amount by a penny
            coinsReceived++;  //increase count
            eprintf("Number of coins you will receive:  %i\n", coinsReceived);
            eprintf("You have %f in change left\n", changeInDollars);   // return coinsReceived;
        }
        printf("%i\n", coinsReceived);
    }
}

//pseudocode
//while (quarters can be used)
//increase count
//decrease amount by a quarter
//while (dimes can be used)
//increase count
//decrese amount by a dime
//while (nickle can be used)
//increase count
//decrese amount by a nickle
//while (pennies can be used)
//increase count
//decrese amount by a penny