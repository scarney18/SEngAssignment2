#include <string.h>
#include <stdio.h>
#include "Players.h"
void addPlayers()
{
    char name1[20],name2[20];//declaring character arrays to hold the names of players
    printf("Enter player 1 name, they will play as red\n");//asking user to input a name and colour choice
    scanf("%s",name1);//taking in user input
    printf("Enter player 2 name, they will play as green\n");//asking user for the second players name and colour
    scanf("%s",name2);//taking in the input
    strcpy(player[0].name,name1);//giving the struct players values for name and colour
    player[0].colour = 1;
    strcpy(player[1].name,name2);
    player[1].colour = 2;
}
