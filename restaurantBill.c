//Michael Chon
//102022
//Computes tax and tip on a restaurant bill for a patron
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
    //receive tax (7.25 in ca) and tip
    const double tax = 7.25;
    int tip;
    if(argc1 != 2) {
        printf("Usage: %s <tip percentage>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    sscanf(arg[1], "%f", &tip);

    //const prices for salad, soup, sandwich, pizza
    const double salad = 9.95;
    const double soup = 4.55;
    const double sandwich = 13.25;
    const double pizza = 22.35;
    double total;
    double menu[4] = {salad, soup, sandwich, pizza};

    //randomly choose between salad, soup, sandwich pizza
    int randChoice;
    srand(time(NULL));
    randChoice = (rand() % 4) - 1;
    //calculate tax, then tip
    total = menu[randChoice] + (menu[randChoice] * (tax / 100));
    total = total + (total * (tip / 100));
    //display meal cost, tax amount, tip amount, total to output
    if(randChoice == 0)
        printf("Meal Cost: Salad - $%.2f\n", menu[randChoice]);
    else if(randChoice == 1)
        printf("Meal Cost: Soup - $%.2f\n", menu[randChoice]);
    else if(randChoice == 2)
        printf("Meal Cost: Sandwich - $%.2f\n", menu[randChoice]);
    else
        printf("Meal Cost: Pizza - $%.2f\n", menu[randChoice]);
    printf("Tax Amount: $%.2f\nTip Amount: %%%d\nTotal Bill: $%.2f\n", tax, tip, total);
    return 0;
}