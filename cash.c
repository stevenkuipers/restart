// I hate C!
// I'm used to Python and JS!
// I want variable conversion and want to chain functions!
// I expect functionality!

#import <cs50.h>
#import <stdio.h>
#import <math.h>

int main(void)
{
    float cashIn;
    do
    {
        cashIn = get_float("How much do you need to pay back? \n");
    }
    while (cashIn < 0);
    cashIn = round(cashIn * 100);
    int cash = cashIn;
    cash = round(cash);
    int counter = 0;

    while (cash - 25 >= 0)
    {
        cash = cash - 25;
        counter++;
    }
    while (cash - 10 >= 0)
    {
        cash = cash - 10;
        counter++;
    }
    while (cash - 5 >= 0)
    {
        cash = cash - 5;
        counter++;
    }
    while (cash - 01 >= 0)
    {
        cash = cash - 01;
        counter++;
    }
    printf("%i\n", counter);
}