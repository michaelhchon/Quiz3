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

int main()
{
    srand(time(NULL));
    
    //test with lo shu sqaure

    //test with no lo shu square

    //random 2d array
    //fill 2d array with numbers 1-9, no repeats
    //test through function

    //print total number of squares generated and tested before success

    //print square and show placement of values

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
    if((arr[0,0] + arr[1,1] + arr[2,2]) == 15)
        check += 1;
    if((arr[2,0] + arr[1,1] + arr[0,2]) == 15)
        check += 1;
    //check if each one added up to 15
    if(check == 8)
        return 1;
    else
        return 0;
}