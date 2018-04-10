#include <stdio.h>
#include <cs50.h>
/*
PRNG - General
Debug comments are super useful for figuring out how code is running, but when submitting its probably best to comment them out,
    especially since the check50 function (or coding test sites like HackerRank) will count them as a fail
Otherwise, code is neat, variable names are very descriptive (though 'changeInDollars' not really accurate).
I really like that this seems to have started as pseudocode, and then you left that pseudocode to stand as your comments.
    Its technique I'm definitely going to try to integrate for myself in future.
*/
int main(void)
{
    float changeDue;
    float changeInDollars;
    int coinsReceived = 0;

    do
    {
        changeDue = get_float("Ammount of Change: ");  //PRNG - Just nitpicking, but since this would be a user-facing line, it should be 'Amount'
    }
    while (changeDue <= 0);
    {
        printf("You are owed: %.2f\n", changeDue);
        //get amount in dollars
        changeInDollars = changeDue * 100; //PRNG - changeInDollars a little misleading; while we are indeed multiplying by 100, it would be more accurate to say 'change in pennies' or wholeCents
        printf("You will receive: %.0f cents.\n", changeInDollars);


        while (changeInDollars > 25)    //while (quarters can be used) //PRNG - this should actually be >=, example, 50cents would only require 2 quarters, but this approach requires 4
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