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
        //set hashedPassword equal to the provided plaintext password
        //TODO work on string names
        //this is not what the problem actually asks for, just for testing purposes
        string givenPlaintextPassword = argv[1];

        //print the plaintext password provided by the user
        printf("Password: %s\n", givenPlaintextPassword);
        printf("\n");

        //TODO testing for B, remove later
        printf("%s\n",crypt("B","50"));
        printf("\n");

        string guessedPlaintextPassword = "A";
        string hashedPassword = crypt(guessedPlaintextPassword,"50");

        for (int i = 65; i < 91; i++)
        {
            if (strcmp(crypt(givenPlaintextPassword,"50"), hashedPassword) != 0)
            {
                givenPlaintextPassword = givenPlaintextPassword + 1;
            }
        }

        //TODO need to convert from hash to plaintext, this currently prints the hash of the password
        printf("Original password is: %s\n", givenPlaintextPassword);
        return 0;

        //TODO shouldn't there be a failure state in here somewhere?
    }

    else
    {
        printf("Error\n");
        return 1;
    }
}

//TODO
//use a for loop to iterate through up to a four character
//password key with the ASCII values for a–zA–Z0–9./ and
//using a salt of "50"
// use 50YHuxoCN9Jkc for testing

//look for a command-line argument of the hashes provided
//run the for loop until the result matches the hash provided
