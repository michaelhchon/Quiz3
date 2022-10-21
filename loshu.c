//Michael Chon
//102022
//Program that checks if a 3x3 array is a "Lo Shu Magic Square"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define R 3
#define C 3

//write function that accepts 2d array and checks if lo shu square
int loshu(int arr[R][C]);
void output(int result, int tries);
int **fillArray(int x, int y);
void printSquare(int arr[R][C]);

int main()
{
    //srand(time(NULL));
    int result;
    //test with lo shu sqaure
    int arrOne[R][C] = {{4, 9, 2},
                        {3, 5, 7},
                        {8, 1, 6}};
    result = loshu(arrOne);
    output(result, 9);
    //test with no lo shu square
    int arrTwo[R][C] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
    result = loshu(arrTwo);
    output(result, 9);

    //fill 2d array with random numbers 1-9, no repeats
    int arrThree[][];
    int squares = 0;
    while(check == 1) {
        //test through function
        arrThree = fillArray(R, C);
        result = loshu(arrThree);
        squares += 9;
        output(result, squares);
        //print square and show placement of values
        if(result == 1)
            printSquare(arrThree);
    }

    return 0;
}

//function that accepts 2d array and checks if lo shu square
int loshu(int arr[R][C])
{
    int total = 0;
    int check = 0;
    //check rows
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            total += arr[i][j];
            if(total == 15)
                check += 1;
        }
        total = 0;
    }
    //check columns
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            total += arr[j][i];
            if(total == 15)
                check += 1;
        }
        total = 0;
    }
    //check diagonals
    if((arr[0][0] + arr[1][1] + arr[2][2]) == 15)
        check += 1;
    if((arr[2][0] + arr[1][1] + arr[0][2]) == 15)
        check += 1;
    //check if each one added up to 15
    if(check == 8)
        return 1;
    else
        return 0;
}

void output(int result, int tries)
{
    if(tries > 9) {
        if(result == 1)
            printf("Array is a Lo Shu Magic Square. %d squares tested.\n", tries);
    }
    if(result == 1)
        printf("Array is a Lo Shu Magic Square. %d squares tested.\n", tries);
    else
        printf("Array is not a Lo Magic Square.\n");
}