#ifndef SEASSIGNMENT2_BOARD_H
#define SEASSIGNMENT2_BOARD_H
#include "Players.h"
#include <stdlib.h>
#include <stdio.h>
struct pieces{//struct for individual pieces of the board
    int colours;
    struct pieces *nextPiece;
} pieces;
typedef struct boardSpaces{//struct for each square of the board
    int colourNum;
    int pieceNum;
    struct boardSpaces *Next;
} boardSpace;
boardSpace theBoard[8][8];//declaring the board as a 2d array of structs
void board();//prototype of function
#endif //SEASSIGNMENT2_BOARD_H
