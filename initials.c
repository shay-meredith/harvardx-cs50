#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //ask user for input
    printf("Enter your full name: ");
    string name = get_string();
 
    printf("Your name is %s\n", name);
    
    //make sure get_string returns a string
    if (name != NULL)
    {
        //iterate through the letters of name one at a time
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            //remove spaces from output
            if (name[i] != ' ')
            {
                //print each letter as upper case
                printf("%c", toupper(name[i]));
                i++;
                while (name[i] != ' ' && i < n)
                {
                    i++;
                }
            }
        }
        printf("\n");
    }
}
