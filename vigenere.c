#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //check for two command-line arguments
    if (argc == 2)
    {
        //iterate through the key letters
        for (int x = 0, y = strlen(argv[1]); x < y; x++)
        {
            char keyLetter = argv[1][x];

            //check for all alphabetical characters in the key
            if (isalpha(keyLetter))
            {
            }

            else
            {
                printf("Error\n");
                return 1;
            }
        }

        //create string k = to the key entered in the command-line argument
        //create integer j to track the letters of the key (k)
        string k = argv[1];
        int j = 0;

        //ask for plaintext and store in "p"
        printf("plaintext: ");
        string p = get_string();
        if (p != NULL)
        {
            printf("ciphertext: ");

            //iterate through the characters of "p"
            for (int i = 0, n = strlen(p); i < n; i++)
            {
                if (j < strlen(k))
                {
                    //check for alphabetic characters
                    if (isalpha(p[i]))
                    {
                        //check for upper case letters
                        if (isupper(p[i]))
                        {
                            //convert the plaintext letter's ASCII value to alphabetic index
                            char plainIndexUpper = p[i] - 65;

                            //convert the key to upper case because the key
                            //does not respect case choice
                            char keyIndex = toupper(k[j]) - 65;

                            //encipher plaintext using the key
                            char c = (plainIndexUpper + keyIndex) % 26;

                            //return to ASCII value
                            char cipherText = c + 65;
                            printf("%c", cipherText);

                            j++;

                        }

                        //check for lower case letters
                        if (islower(p[i]))
                        {
                            //convert letter ASCII value to alphabetic index
                            char plainIndexLower = p[i] - 97;

                            //convert the key to upper case because the key
                            //does not respect case choice
                            char keyIndex = toupper(k[j]) - 65;

                            //exncipher plaintext using the key
                            char c = (plainIndexLower + keyIndex) % 26;

                            char cipherText = c + 97;
                            printf("%c", cipherText);
                            j++;
                        }
                    }

                    //print original character if not alphabetic (i.e. do not encipher)
                    else
                    {
                        printf("%c", p[i]);
                        j++;
                    }
                }

                else
                {
                    j = 0;

                    //check for alphabetic characters
                    if (isalpha(p[i]))
                    {
                        //check for upper case letters
                        if (isupper(p[i]))
                        {
                            //convert the plaintext letter's ASCII value to alphabetic index
                            char plainIndexUpper = p[i] - 65;

                            //convert the key to upper case because the key
                            //does not respect case choice
                            char keyIndex = toupper(k[j]) - 65;

                            //encipher plaintext using the key
                            char c = (plainIndexUpper + keyIndex) % 26;

                            //return to ASCII value
                            char cipherText = c + 65;
                            printf("%c", cipherText);

                            j++;

                        }

                        //check for lower case letters
                        if (islower(p[i]))
                        {
                            //convert letter ASCII value to alphabetic index
                            char plainIndexLower = p[i] - 97;

                            //convert the key to upper case because the key
                            //does not respect case choice
                            char keyIndex = toupper(k[j]) - 65;

                            //exncipher plaintext using the key
                            char c = (plainIndexLower + keyIndex) % 26;

                            char cipherText = c + 97;
                            printf("%c", cipherText);
                            j++;
                        }
                    }

                    //print original character if not alphabetic (i.e. do not encipher)
                    else
                    {
                        printf("%c", p[i]);
                        j++;
                    }

                }

            }

            //new line
            printf("\n");
            return 0;
        }

        else
        {
            //print error if there are more or less than two arguments
            printf("Error\n");
            return 1;
        }
    }

    else
    {
        //print error if there are more or less than two arguments
        printf("Error\n");
        return 1;
    }
}

