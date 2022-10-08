
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char HUMAN ='X';
const char NPC ='O';

void printBoard();
void clearBoard();
int checkSpaces();
char checkWin();
void humanMove();

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

        while(win == ' ' && checkSpaces()!=0)
        {
            printBoard();

            humanMove();

            win = checkWin();

        }
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

int checkSpaces()
{
    int blankSpaces = 9;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[i][j]!=' ')
            {
                blankSpaces--;
            }
        }
    }
    return blankSpaces;
}

void humanMove()
{
    int a;
    int b;
    
    do
    {
     printf("Enter designated row (#1-3");
    scanf("%d, &a");
    a--;

    printf("Enter designated column (#1-3");
    scanf("%d, &b");
    b--;

    if(board[a][b]!=' ')
    {
        printf("Error! Space isn't blank\n");

    }
    else
    {
        board[a][b]= HUMAN;
        break;
    }
    } while (board[a][b]!=' ');

    
}   

char checkWin()
{
    //check each row
    for(int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1] && board[i][0]==board[i][2])
        {
            return board[i][0];
        }
        
    }
    
    //check columns
    for(int i=0;i<3;i++)
    {
        if(board[0][i]==board[1][i] && board[0][i]==board[2][i])
        {
            return board[0][i];
        }
        
    }

    

}