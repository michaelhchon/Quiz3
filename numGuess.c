//Michael Chon
//102022
//Interactive program that allows a user to guess between 1-10
#include <stdio.h>
#include <time.h>

int userPrompt();

int main()
{
    //prompt user for options
    srand(time(NULL));
    int choice, userNum, randNum, winCon;
    int max = 10;
    int loopCon = 1;
    do {
        choice = userPrompt();
        //if 1
        if(choice == 1) {
            randNum = rand() % max;
            winCon = 1;
            while(winCon == 1) {
                //prompt user for number
                printf("Enter guess from 1 - %d: ", max);
                //receive number then tell if correct or wrong
                scanf("%d", &userNum);
                //receive new guess until they win
                if(userNum == randNum) {
                    printf("%d is the correct number!\n", randNum);
                    winCon = 0;
                }
                else if(userNum > randNum) {
                    printf("%d is too high! Try again.\n", userNum);
                }
                else {
                    printf("%d is too low! Try again.\n", userNum);
                }
            }
        }
    
        //if 2
        else if(choice == 2) {
            //provide min and max number
            printf("Max value you can set is 100: ");
            scanf("%d", &max);
            while(max < 0 || max > 100) {
                printf("Invalid number, enter new value between 1 - 100: ");
                scanf("%d", &max);
            }
        }

        //if 3
        else {
            // thank user for playing and end game
            printf("Thank you for playing\n");
            loopCon = 0;
        }
    } while(loopCon == 1);

    return 0;    
}

int userPrompt()
{
    int choice;
    printf("\nPress 1 to play a game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
    scanf("%d", &choice);
    return choice;
}
