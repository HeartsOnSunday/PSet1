#include <stdio.h>
#include <cs50.h>
/*
PRNG
Only feedback for this is that the for loops don't need to be placed in brackets below the while loop like this
1) it looks like they're part of a while loop, making it seem like the do is a standalone
2) it unnecessarily indents that bracketed code

Otherwise, variable names are clear, and comments are helpful
*/
int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
        if (height == 0)
        {
            return 0;
        }
    }
    while (height < 1 || height > 23);
    { //PRNG - This bracket oddly placed. The while functions are part of the do loop, but the bracket placement makes it seem like the while is tied to the bracket space below
        for (int a = 0; a < height; a++) //prints rows
        {
            for (int b = 0; b < height - a - 1; b++) //prints spaces in each row
            {
                printf("%s", " ");
            }
            for (int c = 0; c < a + 2; c++) //prints #'s for each row
            {
                printf("#");
            }
            printf("\n");
        }
    }
}
