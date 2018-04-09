#include <stdio.h>
#include <cs50.h>

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
    {
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
