//Michael Chon
//102022
//Computes tax and tip on a restaurant bill for a patron
#include <stdio.h>

int main(int argc, char *argv[])
{
    //receive tax (7.25 in ca) and tip
    const double tax = 7.25;
    double tip;
    if(argc1 != 2) {
        printf("Usage: %s <tip amount>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    sscanf(arg[1], "%f", &tip);

    //const prices for
    //salad - 9.95
    //soup - 4.55
    //sandwich - 13.25
    //pizza - 22.35
    const double salad = 9.95;
    const double soup = 4.55;
    const double sandwich = 13.25;
    const double pizza = 22.35;
    double total;

    //randomly choose between salad, soup, sandwich pizza
    //calculate tax, then tip

    //display meal cost, tax amount, tip amount, total to output

    return 0;
}