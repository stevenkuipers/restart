#import <stdio.h>
#include <stdlib.h>
#import <cs50.h>
#import <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int k;
    // Check if one argument is provided
    if ( argc == 2)
    {
        k = atoi(argv[1]);
        printf("%i\n", k);
    }
    else
        // if n of arguments is !2 print error message and exit
    {
        printf("Error: You need to provide one postive number to caesar as argument when starting the program\n");
        return 1;
    }
    //get userinput and encypher it by shifting k places mod 26
    string userinput = get_string("plaintext: ");
    char c;
    printf("ciphertext: ");
    for (int i = 0; i < strlen(userinput); i++)
    {
        c = userinput[i];
        if (islower(c))
        {
            c = ((c - 'a' + k) % 26) + 'a';
            printf("%c", c);
        }
        else if (isupper(c))
        {
            c = ((c - 'A' + k) % 26) + 'A';
            printf("%c", c);
        }
        else
        {
            printf("%c", c);
        }
    }
    printf("\n");
    return 0;
}
