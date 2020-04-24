//
// Created by carne on 24/04/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include "Board.h"
#include "PrintBoard.h"
void printBoard(boardSpace theBoard[8][8])
{
    printf("  /");
    for(int i=2;i<=5;i++)
    {
        if(theBoard[0][i].colourNum==1)
        {
            system("COLOR 0C");
        }
        if(theBoard[0][i].colourNum==2)
        {
            system("COLOR 0A");
        }
        if(theBoard[0][i].colourNum==0)
        {
            system("COLOR 07");
        }
        printf(" %d",theBoard[0][i].pieces);
    }
    printf(" \\\n/");
    for(int i=1;i<=6;i++)
    {
        if(theBoard[1][i].colourNum==1)
        {
            system("COLOR 0C");
        }
        if(theBoard[1][i].colourNum==2)
        {
            system("COLOR 0A");
        }
        if(theBoard[1][i].colourNum==0)
        {
            system("COLOR 07");
        }
        printf(" %d",theBoard[1][i].pieces);
    }
    printf(" \\\n");
    for(int i=2;i<=5;i++)
    {
        for(int j=0;j<=7;j++)
        {
            if(theBoard[i][j].colourNum==1)
            {
                system("COLOR 0C");
            }
            if(theBoard[i][j].colourNum==2)
            {
                system("COLOR 0A");
            }
            if(theBoard[i][j].colourNum==0)
            {
                system("COLOR 07");
            }
            printf("%d ",theBoard[i][j].pieces);
        }
        printf("\n");
    }
    printf("\\ ");
    for(int i=1;i<=6;i++)
    {
        if(theBoard[6][i].colourNum==1)
        {
            system("COLOR 0C");
        }
        if(theBoard[6][i].colourNum==2)
        {
            system("COLOR 0A");
        }
        if(theBoard[6][i].colourNum==0)
        {
            system("COLOR 07");
        }
        printf("%d ",theBoard[6][i].pieces);
    }
    printf("/\n \\  ");
    for(int i=2;i<=5;i++)
    {
        if(theBoard[7][i].colourNum==1)
        {
            system("COLOR 0C");
        }
        if(theBoard[7][i].colourNum==2)
        {
            system("COLOR 0A");
        }
        if(theBoard[7][i].colourNum==0)
        {
            system("COLOR 07");
        }
        printf("%d ",theBoard[7][i].pieces);
    }
    printf("/\n");
}