#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Question for user
    printf("How high is Mario's pyramid?\n");
    int height;
    do
    {
        //Prompt user for height
        printf("Height: ");
        height = get_int();
    }
    //Check that input is between 0 and 23
    while (height < 0 || height > 23);
    
    //Nested loops to print pyramid
    for (int row = 0; row < height; row++)
    {
        for (int column = 0; column < height; column++)
        {
            while (column < height-row-1)
            {
                printf(" ");
                column++;
            }
            while (column < height)
            {
                printf("#");
                column++;
            }
            printf("  ");
            while (column < height + row + 1)
            {
                printf("#");
                column++;
            }
            printf("\n");
        }
    }

}