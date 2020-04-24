//
// Created by carne on 24/04/2020.
//

#include <string.h>
#include <stdio.h>
#include "Players.h"
void addPlayers()
{
    char name1[20],name2[20];
    int colour1,colour2;
    printf("Enter player 1 name and colour(1 = red, 2 = green)\n");
    scanf("%s %d",name1,&colour1);
    while(colour1>2||colour1<1)
    {
        printf("Not a valid colour choice, choose again\n");
        scanf("%d",&colour1);
    }
    printf("Enter player 2 name and colour(1 = red, 2 = green)\n");
    scanf("%s %d",name2,&colour2);
    while(colour2>2||colour2<1)
    {
        printf("Not a valid colour choice, choose again\n");
        scanf("%d",&colour2);
    }
    while(colour1==colour2)
    {
        printf("Players cannot play the same colour, enter a different colour for player 2\n");
        scanf("%d",&colour2);
    }
    strcpy(player[0].name,name1);
    player[0].colour = colour1;
    strcpy(player[1].name,name2);
    player[1].colour = colour2;
}
