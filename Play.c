#include "Play.h"
void playGame(boardSpace theBoard[8][8])
{
    //printing information on who goes first and how board spaces are chosen
    printf("Red player goes first, when choosing a stack type the co-ordinates of it"
           " e.g. 1 2 would be 1 down from the top and 2 to the right from the left.\n");
    bool winner = 0;//a boolean value which is true when a winner is found and false otherwise
    int turncount=1;//a counter used to keep track on which players go it is
    int greencount=0,redcount=0;//integers which keep count of how many stacks with green and red on top
    int playerNum;//integer which stores the number of the player
    while(winner==0)//loop which plays the game until a winner is decided
    {
        redcount=0;//resetting the count of each colour to 0
        greencount=0;
        for(int i=0;i<8;i++)
        {//loop through the board after every turn to check if somebody has met the win condition
            for(int j=0;j<8;j++)
            {
                if(theBoard[i][j].colourNum==1)
                {
                    redcount++;//increasing redcount every time a red topped stack is found
                }
                if(theBoard[i][j].colourNum==2)
                {
                    greencount++;//increasing greencount every time a green topped stack is found
                }
            }
        }
        if (redcount==1)
        {
            winner=1;//if there are no stacks with red on top green must have won
        }
        if (greencount==1)
        {
            winner=1;//if there are no stacks with green on top red must have won
        }
        if(turncount % 2 == 1)
        {//if that checks if the turn is even or odd, therefore deciding if it is red or green's turn
            printf("Red player, choose what stack you want to move\n");//asking for input from the red player
            playerNum=0;//this number is used in the player[] array to give information on red
        }
        else
        {//if turncount is even it will be green's turn
            printf("Green player, choose what stack you want to move\n");//asking for input from green player
            playerNum=1;//this number is used for information of the green player
        }
        int positioni,positionj;//integers which will hold the value for the stack the player wants to move
        scanf("%d %d",&positioni,&positionj);//taking the input requested above
        while(positioni>7||positionj>7||positioni<0||positionj<0)
        {//while loop to check if the position chosen is out of the limits of the board
            printf("Invalid space, choose again\n");//ask user to choose again
            scanf("%d %d",&positioni,&positionj);//taking new input if the previous wasn't valid
        }
        while((positioni==0 && (positionj==0||positionj==1||positionj==5||positionj==6))
        || (positioni==1 && (positionj==0||positionj==7))
        ||(positioni==7 && (positionj==0||positionj==1||positionj==7||positionj==6))
        || (positioni==6 && (positionj==0||positionj==7)))
        {//this while loop prevents players from picking any of the corners which are non-playable in the array
            printf("Invalid space, choose again\n");//ask user to choose again
            scanf("%d %d",&positioni,&positionj);//taking new input
        }
        while(theBoard[positioni][positionj].colourNum!=player[playerNum].colour)
        {//checking if the top of the stack has the same colour piece as the player colour
            printf("Invalid choice, choose a space with your colour on top\n");//ask user to choose again
            scanf("%d %d",&positioni,&positionj);//take new input
        }
        int newpositioni,newpositionj;//integers which will hold the co-ordinates of the new stack being created
        printf("Choose where you would like to move to, "
               "it must be within the same number of spaces as pieces in your stack\n");//asking for input of new co-ords
        scanf("%d %d",&newpositioni,&newpositionj);//taking input from user
        while((abs(newpositioni-positioni)+abs(newpositionj-positionj))>theBoard[positioni][positionj].pieceNum)
        {//checking if the number of spaces the player wants to move is within the size of their stack according to rules
            printf("Invalid move, move the stack a number of spaces less than or equal to the number of pieces in the stack\n");
            scanf("%d %d",&newpositioni,&newpositionj);//taking new input
        }
        while(positioni==newpositioni && positionj==newpositionj)
        {//checking to ensure the stack is moving to a new space
            printf("Invalid move, move the stack to a new space\n");
            scanf("%d %d",&newpositioni,&newpositionj);//taking new input
        }
        //adding the size of the old stack onto the new one
        theBoard[newpositioni][newpositionj].pieceNum+=theBoard[positioni][positionj].pieceNum;
        //taking away the old stack from the old position
        theBoard[positioni][positionj].pieceNum-=theBoard[positioni][positionj].pieceNum;
        //setting the old position as a neutral board space, i.e. neither red nor green
        theBoard[positioni][positionj].colourNum=0;
        //giving the new position of the stack the same top colour as the players as that will always be the case after a move
        theBoard[newpositioni][newpositionj].colourNum=player[playerNum].colour;
        while(theBoard[newpositioni][newpositionj].pieceNum>5)
        {//while loop to check if the board square has more than 5 pieces
            theBoard[newpositioni][newpositionj].pieceNum--;//taking a piece away until the size is 5 again
        }
        printBoard(theBoard);//printing the board after each turn
        turncount++;//increasing the turncount by one as a turn ends
    }
    if(redcount==0)
    {//check if the red player has no more moves left and print the green player as the winner based on that
        printf("%s is the winner, %s has no more moves left\n",player[1].name,player[0].name);
    }
    else if (greencount==0)
    {//check the opposite and print the red player as the winner
        printf("%s is the winner, %s has no more moves left\n",player[0].name,player[1].name);
    }
}
