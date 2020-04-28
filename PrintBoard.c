#include <stdio.h>
#include "Board.h"
#include "PrintBoard.h"
void printBoard(boardSpace theBoard[8][8])
{
    printf("   /  ");//creating the corners of the board
    for(int i=2;i<=5;i++)
    {//loop that prints each number on the top row
        printf("%d  ",theBoard[0][i].pieceNum);
    }
    printf("\\\n/  ");//corner of the board
    for(int i=1;i<=6;i++)
    {//loop that prints each number of pieces and colour of the top piece on the next row
        if(theBoard[1][i].colourNum==1)
        {//printing R if red is the colour of the top of the stack
            printf("R");
        }
        if(theBoard[1][i].colourNum==2)
        {//printing G if green is the colour of the top of the stack
            printf("G");
        }
        printf("%d ",theBoard[1][i].pieceNum);//printing the number of pieces per stack
        if(theBoard[1][i].colourNum==0)
        {//adding a space if the square on the board is blank to keep the board a more consistent size
            printf(" ");
        }
    }
    printf("\\\n");//printing a corner of the board
    for(int i=2;i<=5;i++)
    {//loop which fills row 2 to 5
        for(int j=0;j<=7;j++)
        {
            if(theBoard[i][j].colourNum==1)
            {//printing colours same as above
                printf("R");
            }
            if(theBoard[i][j].colourNum==2)
            {
                printf("G");
            }
            printf("%d ",theBoard[i][j].pieceNum);
            if(theBoard[i][j].colourNum==0)
            {//adding a space if the square of the board is blank to keep the board a more consistent size
                printf(" ");
            }
        }
        printf("\n");//adding new line after each row
    }
    printf("\\  ");//adding a corner
    for(int i=1;i<=6;i++)
    {//filling the remaining two rows below using the same method as above
        if(theBoard[6][i].colourNum==1)
        {
            printf("R");
        }
        if(theBoard[6][i].colourNum==2)
        {
            printf("G");
        }
        printf("%d ",theBoard[6][i].pieceNum);
        if(theBoard[6][i].colourNum==0)
        {
            printf(" ");
        }
    }
    printf("/\n   \\  ");
    for(int i=2;i<=5;i++)
    {
        if(theBoard[7][i].colourNum==1)
        {
            printf("R");
        }
        if(theBoard[7][i].colourNum==2)
        {
            printf("G");
        }
        printf("%d  ",theBoard[7][i].pieceNum);
    }
    printf("/\n");//finsihed printing the board
}