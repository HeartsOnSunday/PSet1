// #include <stdio.h>
// #include <cs50.h>
// #include <math.h>

// int main(void)
// {
//     float changeDue;
//     float changeInDollars;
//     int coinsReceived = 0;

//     do
//     {
//         changeDue = get_float("Ammount of Change: ");
//     }
//     while(changeDue <=0);
//     {
//         printf("You are owed: %.2f\n", changeDue);
//      //get amount in dollars
//         changeInDollars = roundf(changeDue*100);
//         printf("You will receive: %.0f cents.\n", changeInDollars);

//         //while (quarters can be used)
//         while (changeInDollars >= 25)
//         {
//             changeInDollars = roundf(changeInDollars);
//             eprintf("%f\n", changeInDollars);

//             eprintf("Quarters!\n");
//             float quarters = changeInDollars % 25;

//             printf("Quarters to give %f\n", quarters);
//             coinsReceived++;  //increase count
//             printf("Number of coins you will receive:  %i quarter.\n", coinsReceived);
//           //  int c = changeInDollars;

//           //  int numQs = c % 25;  //decrease amount by a quarter
//          //   printf("you should get %i quarters\n", numQs);

//          //   coinsReceived = coinsReceived + numQs;
//         //    printf("you have %i quarters coming\n", coinsReceived);

//          //   changeInDollars = changeInDollars - (numQs*25);
//          //   printf("now you are owed %f", changeInDollars);

//             while (changeInDollars >= 10)
//             {
//                 eprintf("Dimes, kids!\n");
//                 coinsReceived++;  //increase count
//                 printf("Number of coins you will receive:  %i dimes.\n", coinsReceived);

//                 while (changeInDollars >= 5)
//                 {
//                     eprintf("Nickles, kids!\n");
//                     coinsReceived++;  //increase count
//                     printf("Number of coins you will receive:  %i nickles.\n", coinsReceived);

//                     while (changeInDollars >= 1)
//                     {
//                     eprintf("pennies\n");
//                     coinsReceived++;  //increase count
//                     printf("Number of coins you will receive:  %i pennies.\n", coinsReceived);

//                     return coinsReceived;
//                     }
//                 }

//             }
//         }


// printf("the buck stops here\n");


//             //increase count
//             //decrease amount by a quarter
//         //while (dimes can be used)
//             //increase count
//             //decrese amount by a dime
//          //while (nickle can be used)
//             //increase count
//             //decrese amount by a nickle
//          //while (pennies can be used)
//             //increase count
//             //decrese amount by a penny



//     }
// }