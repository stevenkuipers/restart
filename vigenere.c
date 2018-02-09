#import <stdio.h>
#include <stdlib.h>
#import <cs50.h>
#import <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    string k;
// Input check and transform to lowercase
    if ( argc == 2)
    {
        k = argv[1];
// Check if arg is only alphabetical...
        for (int i = 0; i < strlen(k); i++)
        {
            if (! isalpha(k[i]))
            {
                printf("Error: You can only give alphabetical arguments when starting the program\n");
                return 1;
            }
            else
            {
// ...and convert all to lower case...
                k[i] = tolower(k[i]);
            }
        }
    }
    else
//else quit with error:
// if n of arguments is !2 print error message and exit
    {
        printf("Error: You need to provide one word as argument when starting the program\n");
        return 1;
    }

//get userinput and encypher it by shifting k places mod 26
    string userinput = get_string("plaintext: ");
    char c;
    int kIdx = 0;
    printf("ciphertext: ");
    for (int i = 0; i < strlen(userinput); i++)
    {
        c = userinput[i];
// if lowercase, add current alphabetical index of key to char
        if (isalpha(c) && islower(c))
        {
            c = ((c - 'a' + k[kIdx] - 'a') % 26) + 'a';
            kIdx = (kIdx + 1) % strlen(k);
            printf("%c", c);
        }
// if uppercase, add current alphabetical index of key to char
        else if (isalpha(c) && isupper(c))
        {
            c = ((c - 'A' + k[kIdx] - 'a') % 26) + 'A';
            kIdx = (kIdx + 1) % strlen(k);
            printf("%c", c);
        }
// If non alphabetical char just print it as is
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}
