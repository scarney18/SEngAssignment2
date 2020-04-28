#include "PrintBoard.h"
#include "Board.h"
void board()
{
    for(int i=1;i<7;i++)//looping through the board
    {
        for(int j=1;j<7;j++)
        {
            theBoard[i][j].pieceNum=1;//adding 1 piece to each space that needs one
            if(i%2==1 && (j==1||j==2||j==5||j==6))
            {
                theBoard[i][j].colourNum = 1;//assigning the red colour when needed
            }
            else if(i%2==1 && (j==3||j==4))
            {
                theBoard[i][j].colourNum = 2;//assigning the green colour when needed
            }
            else if(i%2==0 && (j==1||j==2||j==5||j==6))
            {
                theBoard[i][j].colourNum =2;//assigning green to the spaces missed by the first if condition
            }
            else//assigning red to all the remaining spaces
            {
                theBoard[i][j].colourNum = 1;
            }
        }
    }
    printBoard(theBoard);//printing the board as it is first initialised
}