#include "PrintBoard.h"
#include "Board.h"
#include "Players.h"
#include "Play.h"
int main() {
    addPlayers();//calls on the function to add players to the game
    board();//calls on the function which initialises the board
    playGame(theBoard);//calls on the function that starts the game with the board and holds game logic
    return 0;
}
