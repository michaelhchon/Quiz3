//Michael Chon
//102022
//Interactive program that allows a user to guess between 1-10
#include <stdio.h>

int userPrompt();

int main()
{
    //prompt user for options
    int choice;
    int loopCon = 1;
    do {
        choice = userPrompt();
        //if 1
        if(choice == 1) {
            //prompt user for number
            //receive number then tell if correct or wrong
            //receive new guess until they win
            //if input is 'q' return to menu
        }
    
        //if 2
        else if(choice == 1) {
            //provide min and max number
        }

        //if 3
        else {
            // thank user for playing and end game
            printf("Thank you for playing\n");
            loopCon = 0;
        }
    } while(loopCon == 1)

    return 0;    
}

int userPrompt()
{
    int choice;
    printf("Press 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
    scanf("%d", &choice);
    return choice;
}
