#include <stdio.h>
#include <cs50.h>

int main(void)
{
    float changeDue;
    float changeInDollars;
   // int coinsReceived = 0;
    //float quarter = 25;

    do
    {
        changeDue = get_float("Ammount of Change: ");

    }
    while(changeDue <=0);
    {
        printf("You are owed: %f\n", changeDue);
     //get amount in dollars
        changeInDollars = changeDue*100;
        printf("You will receive: %f cents.\n", changeInDollars);

        //while (quarters can be used)
        if (changeInDollars >= 25)
        {
            eprintf("Quarters!");

            //coinsReceived++;  //increase count
           // printf("Number of coins you will receive:  %i\n", coinsReceived);
          //  int c = changeInDollars;

          //  int numQs = c % 25;  //decrease amount by a quarter
         //   printf("you should get %i quarters\n", numQs);

         //   coinsReceived = coinsReceived + numQs;
        //    printf("you have %i quarters coming\n", coinsReceived);

         //   changeInDollars = changeInDollars - (numQs*25);
         //   printf("now you are owed %f", changeInDollars);

            if(changeInDollars >= 10)
            {
                eprintf("Dimes, kids!");

                if(changeInDollars >= 5)
                {
                    eprintf("Nickles, kids!");

                    if(changeInDollars >= 1)
                    {
                    eprintf("pennies, bruh!");
                    }
                }

            }
        }


printf("the buck stops here\n");


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



    }
}