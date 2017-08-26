#define _XOPEN_SOURCE
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <crypt.h>

int main(int argc, string argv[])
{
    //check for a command-line argument
    if (argc == 2)
    {
        //set givenHashedPassword equal to the provided hashed password
        string givenHashedPassword = argv[1];

        //printf("%s\n",crypt("B","50"));

        //tests for upper and lower case with only some inefficiency
        //is this the best solution????
        for (int i = 65; i < 123; i++)
        {
            //start with the assumption that there is only one character
            //then test for two, three, and finally four characters
            char s[5];
            s[0] = i;
            s[1] = 0;
            s[2] = 0;
            s[3] = 0;
            s[4] = '\0';

            if (strcmp(crypt(s,"50"), givenHashedPassword) == 0)
            {
                //print the plaintext password provided by the user
                printf("Password: %s\n", s);

                return 0;
            }

        }

        for (int i = 65; i < 123; i++)
        {
            for (int j = 65; j < 123; j++)
            {
                char s[5];
                s[0] = i;
                s[1] = j;
                s[2] = 0;
                s[3] = 0;
                s[4] = '\0';

                if (strcmp(crypt(s,"50"), givenHashedPassword) == 0)
                {
                    //print the plaintext password provided by the user
                    printf("Password: %s\n", s);

                    return 0;
                }

            }

        }

        for (int i = 65; i < 123; i++)
        {
            for (int j = 65; j < 123; j++)
            {
                for (int k = 65; k < 123; k++)
                {
                    char s[5];
                    s[0] = i;
                    s[1] = j;
                    s[2] = k;
                    s[3] = 0;
                    s[4] = '\0';

                    if (strcmp(crypt(s,"50"), givenHashedPassword) == 0)
                    {
                        //print the plaintext password provided by the user
                        printf("Password: %s\n", s);

                        return 0;
                    }
                }
            }
        }

        for (int i = 65; i < 123; i++)
        {
            for (int j = 65; j < 123; j++)
            {
                for (int k = 65; k < 123; k++)
                {
                    for (int l = 65; l < 123; l++)
                    {
                        char s[5];
                        s[0] = i;
                        s[1] = j;
                        s[2] = k;
                        s[3] = l;
                        s[4] = '\0';

                        if (strcmp(crypt(s,"50"), givenHashedPassword) == 0)
                        {
                            //print the plaintext password provided by the user
                            printf("Password: %s\n", s);

                            return 0;
                        }
                    }
                }
            }
        }

            printf("Error\n");
            return 1;

    }



    else
    {
        printf("Error\n");
        return 1;
    }
}
