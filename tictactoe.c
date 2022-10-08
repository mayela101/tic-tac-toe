
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char HUMAN ='X';
const char NPC ='O';

void printBoard();
void clearBoard();

int main()
{

    int gamemode;
    char win = ' ';

    
//title 
printf("WELCOME TO TIC TAC TOE!\n");

//1v1 or 1vComputer
printf("1 --- Person VS. Person\n");
printf("2 --- Person VS. Random Computer\n");

//gamemode choice
scanf("%d", &gamemode);
//player v.cpu
    if(gamemode==2)
    {
        clearBoard();
        printBoard();
        
    }




return 0;
}

void clearBoard()
{
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            board[i][j];
        }
    }
}

void printBoard()
{
    printf("\n+--------+\n");
    printf("| %c | %c | %c |", board[0][0], board[0][1], board[0][2]);
    printf("\n+--------+\n");

    printf("| %c | %c | %c |", board[1][0], board[1][1], board[1][2]);
    printf("\n+--------+\n");

    printf("| %c | %c | %c |", board[2][0], board[2][1], board[2][2]);
    printf("\n+--------+\n");
}
