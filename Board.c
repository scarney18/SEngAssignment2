//
// Created by carne on 24/04/2020.
//
#include <stdio.h>
#include "PrintBoard.h"
#include "Board.h"
void board()
{
    for(int i=1;i<7;i++)
    {
        for(int j=1;j<7;j++)
        {
            theBoard[i][j].pieces=1;
            if(i%2==1 && (j==1||j==2||j==5||j==6))
            {
                theBoard[i][j].colourNum = 1;
            }
            else if(i%2==1 && (j==3||j==4))
            {
                theBoard[i][j].colourNum = 2;
            }
            else if(i%2==0 && (j==1||j==2||j==5||j==6))
            {
                theBoard[i][j].colourNum =2;
            }
            else
            {
                theBoard[i][j].colourNum = 1;
            }
        }
    }
    printBoard(theBoard);
}