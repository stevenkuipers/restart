
#import <stdio.h>
#import <cs50.h>

// Ask for user input for a number between 0 and 23;
int get_height()
{
    int height;
    do
    {
        height = get_int("Give the height please: ");
    }
    while (height < 0 || height > 23);

    return height;
}

// Prints half pyramids composed of # aligned to the right
int main(void)
{
    int height = get_height();
    // row
    for (int i = 0; i < height; i++)
    {
        //col
        for (int y = height; y > 0 ; y--)
        {
// HACK, in the loops i and y loop to 0 hence we compare to -1 so we start printing in first row already
            if (y - 1 <= i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("#\n");
    }


}