#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Question for user
    printf("How many minutes do you spend in the shower?\n");
    int m;
    do 
    {
        //Prompt user for input
        printf("Number of minutes: ");
        m = get_int();
    }
    //Check for positive value
    while (m < 1);
    
    //Formula for number of bottles
    int b;
    b = m * 12;
    
    //Return results
    printf("That is equal to %i bottles of water!\n", b);
    printf("Minutes: %i\n", m);
    printf("Bottles: %i\n", b);
}
