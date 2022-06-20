#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const char player11 = '*', player22 = '@';
void gamerules()
{      printf("\n\n\t\t\t\t************** GAME RULES ****************\n\n");
       printf(".  A Snakes and Ladders board (the board contains numbers from 1 to 100, some snakes and some ladders).\n");
       printf(".  When a piece comes on a number which lies on the top of a snake (face of the snake), then the \n   piece/token will land below to the bottom of the snake (tail of it) that can also be said as an unlucky move.\n");
       printf(".  If somehow the piece falls on the ladder base, it will immediately climb to the top of the ladder\n   (which is considered to be a lucky move).\n");
       printf(".  Whereas if a player lands on the bottom of the snake or top of a ladder, the player will remain in the\n   same spot (same number) and will not get affected by any particular rule. The players can never move down ladders.\n");
       printf(".  The pieces of different players can overlap each other without knocking out anyone. There is no concept\n   of knocking out by opponent players in Snakes and Ladders\n");
       printf(".  To win, the player needs to roll the exact number of die to land on the number 100. If he/she fails to do\n   so, then the player needs to roll the die again in the next turn. For example, if a player is on the number 98 and\n   the die roll shows the number 4, then the player cannot move its piece until he/she gets a 2 to win or 1 to be on the 99th number.\n");
       printf(".  The player who manages to be the first person to reach the top/final square on the board (usually the number 100) wins.\n");
return;
}
void instructions()
{
       printf("\n\n\t\t\t*************** Instruction to play the game ****************\n\n");
       printf(".  player 1 move is denoted by '*' and player 2 move is denoted by '@'\n");
       printf(".  Enter the number between 1 to 9 for tossing.\n");
       printf(".  Enter 'space' then 'enter' button for each move.\n");
       printf(".  Enter the 1 for playing again and 2 for not playing the game again. \n ");
}

void snakesladder()
{
       printf("\t\t\t-----------------------------------------------------------------------------------------------------------\n");
       printf("\t\t\tSNAKES : | 17 --> 7 | 54 --> 34 | 62 --> 19 | 64 --> 60 | 87 --> 36 | 93 --> 73 | 94 --> 75 | 98 --> 79 |\n");
       printf("\t\t\t-----------------------------------------------------------------------------------------------------------\n");
       printf("\t\t\tLADDER : | 1 --> 38 |  4 --> 14 |  9 --> 31 | 28 --> 84 | 21 --> 42 | 51 --> 67 | 72 --> 91 | 80 --> 99 |\n");
       printf("\t\t\t-----------------------------------------------------------------------------------------------------------\n");
       return;
}

void playboard(char a[][10], char b[][10])
{
       int static j = 91;
       for (int i = 9; i >= 0; i--)
       {
              if (i % 2 != 0)
              {
                     if (i == 9)
                     {
                            printf("\t\t\t\t ________ ________ ________ ________ ________ ________ ________ ________ ________ ________ \n");
                            printf("\t\t\t\t|        |        |        |        |        |        |        |        |        |        |\n");
                            printf("\t\t\t\t| %d %c %c| %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c |\n", ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], j, a[i][(j - 1) % 10], b[i][(j - 1) % 10]);
                            // printf("|        |        |        |        |        |        |        |        |        |        |\n");
                            j = j - 10;
                     }
                     else
                     {
                            printf("\t\t\t\t ________ ________ ________ ________ ________ ________ ________ ________ ________ ________ \n");
                            printf("\t\t\t\t|        |        |        |        |        |        |        |        |        |        |\n");
                            printf("\t\t\t\t| %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %C |\n", ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], ++j, a[i][(j) % 10], b[i][(j) % 10], j, a[i][(j - 1) % 10], b[i][(j - 1) % 10]);
                            // printf("|        |        |        |        |        |        |        |        |        |        |\n");
                            j = j - 10;
                     }
              }
              else
              {
                     if (i == 0)
                     {
                            printf("\t\t\t\t ________ ________ ________ ________ ________ ________ ________ ________ ________ ________ \n");
                            printf("\t\t\t\t|        |        |        |        |        |        |        |        |        |        |\n");
                            printf("\t\t\t\t| %d %c %C  | %d %c %c  | %d %c %c  | %d %c %c  | %d %c %c  | %d %c %c  | %d %c %c  | %d %c %c  | %d %c %c  | %d %c %c |\n", --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], j, a[i][(j - 1) % 10], b[i][(j - 1) % 10]);
                            // printf("|        |        |        |        |        |        |        |        |        |        |\n");
                     }
                     else
                     {
                            printf("\t\t\t\t ________ ________ ________ ________ ________ ________ ________ ________ ________ ________ \n");
                            printf("\t\t\t\t|        |        |        |        |        |        |        |        |        |        |\n");
                            printf("\t\t\t\t| %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c | %d %c %c |\n", --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], --j, a[i][(j - 2) % 10], b[i][(j - 2) % 10], j, a[i][(j - 1) % 10], b[i][(j - 1) % 10]);
                            // printf("|        |        |        |        |        |        |        |        |        |        |\n");
                            j = j - 10;
                     }
              }
       }
       printf(" \t\t\t\t________ ________ ________ ________ ________ ________ ________ ________ ________ ________ \n");
       j = 91;
       return;
}

void snakes(int *score1, int *score2, int *pps1, int *pps2)
{

       switch (*score1)
       {
       case 17:
              *score1 = 7;
              printf("\t\t\t\tSnakes bites player 1 and its score decreases from 17 to 7\n");
              *pps1 = *pps1 + 1;
              break;
       case 54:
              *score1 = 34;
              printf("\t\t\t\tSnakes bites player 1 and its score decreases from 54 to 34\n");
              *pps1 = *pps1 + 1;
              break;
       case 62:
              *score1 = 19;
              printf("\t\t\t\tSnakes bites player 1 and its score decreases from 62 to 19\n");
              *pps1 = *pps1 + 1;
              break;
       case 64:
              *score1 = 60;
              printf("\t\t\t\tSnakes bites player 1 and its score decreases from 64 to 60\n");
              *pps1 = *pps1 + 1;
              break;
       case 87:
              *score1 = 36;
              printf("\t\t\t\tSnakes bites player 1 and its score decreases from 87 to 36\n");
              *pps1 = *pps1 + 1;
              break;

       case 93:
              *score1 = 73;
              printf("\t\t\t\tSnakes bites player 1 and its score decreases from 93 to 73\n");
              *pps1 = *pps1 + 1;
              break;
       case 94:
              *score1 = 75;
              printf("\t\t\t\tSnakes bites player 1 and its score decreases from 94 to 75\n");
              *pps1 = *pps1 + 1;
              break;
       case 98:
              *score1 = 79;
              printf("\t\t\t\tSnakes bites player 1 and its score decreases from 98 to 79\n");
              *pps1 = *pps1 + 1;
              break;
       }
       switch (*score2)
       {
       case 17:
              *score2 = 7;
              printf("\t\t\t\tSnakes bites player 2 and its score decreases from 17 to 7\n");
              *pps2 = *pps2 + 1;
              break;
       case 54:
              *score2 = 34;
              printf("\t\t\t\tSnakes bites player 2 and its score decreases from 54 to 34\n");
              *pps2 = *pps2 + 1;
              break;
       case 62:
              *score2 = 19;
              printf("\t\t\t\tSnakes bites player 2 and its score decreases from 62 to 19\n");
              *pps2 = *pps2 + 1;
              break;
       case 64:
              *score2 = 60;
              printf("\t\t\t\tSnakes bites player 2 and its score decreases from 64 to 60\n");
              *pps2 = *pps2 + 1;
              break;
       case 87:
              *score2 = 36;
              printf("\t\t\t\tSnakes bites player 2 and its score decreases from 87 to 36\n");
              *pps2 = *pps2 + 1;
              break;
       case 93:
              *score2 = 73;
              printf("\t\t\t\tSnakes bites player 2 and its score decreases from 93 to 73\n");
              *pps2 = *pps2 + 1;
              break;
       case 94:
              *score2 = 75;
              printf("\t\t\t\tSnakes bites player 2 and its score decreases from 94 to 75\n");
              *pps2 = *pps2 + 1;
              break;
       case 98:
              *score2 = 79;
              printf("\t\t\t\tSnakes bites player 2 and its score decreases from 98 to 79\n");
              *pps2 = *pps2 + 1;
              break;
       }
       return;
}
void ladder(int *score1, int *score2, int *ppl1, int *ppl2)
{

       switch (*score1)
       {
       case 1:
              *score1 = 38;
              printf("\t\t\t\tcongrats player 1 climed the ladder from 1 to 38\n");
              *ppl1 = *ppl1 + 1;
              break;
       case 4:
              *score1 = 14;
              printf("\t\t\t\tcongrats player 1 climed the ladder from 4 to 14\n");
              *ppl1 = *ppl1 + 1;
              break;
       case 9:
              *score1 = 31;
              printf("\t\t\t\tcongrats player 1 climed the ladder from 9 to 31\n");
              *ppl1++;
              break;
       case 21:
              *score1 = 42;
              printf("\t\t\t\tcongrats player 1 climed the ladder from 21 to 42\n");
              *ppl1 = *ppl1 + 1;
              break;
       case 28:
              *score1 = 84;
              printf("\t\t\t\tcongrats player 1 climed the ladder from 28 to 84\n");
              *ppl1 = *ppl1 + 1;
              break;
       case 51:
              *score1 = 67;
              printf("\t\t\t\tcongrats player 1 climed the ladder from 51 to 67\n");
              *ppl1 = *ppl1 + 1;
              break;
       case 72:
              *score1 = 91;
              printf("\t\t\t\tcongrats player 1 climed the ladder from 72 to 91\n");
              *ppl1 = *ppl1 + 1;
              break;
       case 80:
              *score1 = 99;
              printf("\t\t\t\tcongrats player 1 climed the ladder from 80 to 99\n");
              *ppl1 = *ppl1 + 1;
              break;
       }
       switch (*score2)
       {
       case 1:
              *score2 = 38;
              printf("\t\t\t\tcongrats player 2 climed the ladder from 1 to 38\n");
              *ppl2 = *ppl2 + 1;
              break;
       case 4:
              *score2 = 14;
              printf("\t\t\t\tcongrats player 2 climed the ladder from 4 to 14\n");
              *ppl2 = *ppl2 + 1;
              break;
       case 9:
              *score2 = 31;
              printf("\t\t\t\tcongrats player 2 climed the ladder from 9 to 31\n");
              *ppl2 = *ppl2 + 1;
              break;
       case 21:
              *score2 = 42;
              printf("\t\t\t\tcongrats player 2 climed the ladder from 21 to 42\n");
              *ppl2 = *ppl2 + 1;
              break;
       case 28:
              *score2 = 84;
              printf("\t\t\t\tcongrats player 2 climed the ladder from 28 to 84\n");
              *ppl2 = *ppl2 + 1;
              break;

       case 51:
              *score2 = 67;
              printf("\t\t\t\tcongrats player 2 climed the ladder from 51 to 67\n");
              *ppl2 = *ppl2 + 1;
              break;
       case 72:
              *score2 = 91;
              printf("\t\t\t\tcongrats player 2 climed the ladder from 72 to 91\n");
              *ppl2 = *ppl2 + 1;
              break;
       case 80:
              *score2 = 99;
              printf("\t\t\t\tcongrats player 2 climed the ladder from 80 to 99\n");
              *ppl2 = *ppl2 + 1;
              break;
       }
       return;
}

void update(char arr1[][10], char arr2[][10], int score1, int score2, int turn)
{
       int scount1 = 0, scount2 = 0, lcount1 = 0, lcount2 = 0;
       int count1 = 0, count2 = 0, num1;
       char n1, n2;

       while (score1 != 100 && score2 != 100)
       {
              srand(time(NULL));
              num1 = (rand() % 6) + 1;
              if (turn == 1)
              {

                     scanf("%c", &n1);
                     if (n1 == ' ')
                     {
                            score1 += num1;
                            if (score1 > 100)
                            {
                                   int p = num1 - (score1 - 100);
                                   score1 -= num1;
                                   count1++;
                                   turn = 2;
                                   playboard(arr1, arr2);
                                   printf("\t\t\t\t-------------------------------------------------------------------------------------------\n");
                                   printf("\t\t\t\t                                          DICE = %d                                            \n", num1);
                                   printf("\t\t\t\t-------------------------------------------------------------------------------------------\n");
                                   printf("\t\t\t\t                                 player %d gets %d on dice\n", turn, num1);
                                   snakesladder();
                                   printf("\t\t\t\tSorry your score on dice should be %d to complete the game\n", p);
                                   printf("\t\t\t\t                       ************ player 1 score = %d ************\n\t\t\t\t                       ************ player 2 score = %d ************\n", score1, score2);
                                   if (score1 < 100 && score2 < 100)
                                   {
                                          printf("\t\t\t\tNow it's turn for player %d\n", turn);
                                   }
                                   continue;
                            }
                            else
                            {
                                   count1++;
                                   snakes(&score1, &score2, &scount1, &scount2);
                                   ladder(&score1, &score2, &lcount1, &lcount2);
                                   for (int k = 0; k < 10; k++)
                                   {
                                          for (int l = 0; l < 10; l++)
                                          {
                                                 arr1[k][l] = ' ';
                                          }
                                   }
                                   int i = (score1 - 1) / 10;
                                   int j = (score1 - 1) % 10;
                                   arr1[i][j] = player11;

                                   playboard(arr1, arr2);
                                   printf("\t\t\t\t-------------------------------------------------------------------------------------------\n");
                                   printf("\t\t\t\t                                         DICE = %d                                             \n", num1);
                                   printf("\t\t\t\t-------------------------------------------------------------------------------------------\n");
                                   printf("\t\t\t\t                                 player %d gets %d on dice\n", turn, num1);
                                   snakesladder();

                                   printf("\t\t\t\t                       ************ player 1 score = %d ************\n\t\t\t\t                       ************ player 2 score = %d ************\n", score1, score2);

                                   turn = 2;
                                   if (score1 < 100 && score2 < 100)
                                   {
                                          printf("\t\t\t\tNow it's turn for player %d\n", turn);
                                   }
                            }
                     }
              }
              else if (turn == 2)
              {

                     scanf("%c", &n2);
                     if (n2 == ' ')
                     {
                            num1 = (rand() % 6) + 1;
                            score2 += num1;
                            if (score2 > 100)
                            {
                                   int p = num1 - (score2 - 100);
                                   score2 -= num1;
                                   count2++;
                                   turn = 1;

                                   playboard(arr1, arr2);
                                   printf("\t\t\t\t-------------------------------------------------------------------------------------------\n");
                                   printf("\t\t\t\t                                         DICE = %d                                             \n", num1);
                                   printf("\t\t\t\t-------------------------------------------------------------------------------------------\n");
                                   printf("\t\t\t\t                                 player %d gets %d on dice\n", turn, num1);
                                   snakesladder();
                                   printf("\t\t\t\tSorry your score on dice should be %d to complete the game\n", p);

                                   printf("\t\t\t\t                       ************ player 1 score = %d ************\n\t\t\t\t                       ************ player 2 score = %d ************\n", score1, score2);

                                   if (score1 < 100 && score2 < 100)
                                   {
                                          printf("\t\t\t\tNow it's turn for player %d\n", turn);
                                   }
                                   continue;
                            }
                            else
                            {    
                                   count2++;
                                   
                                   snakes(&score1, &score2, &scount1, &scount2);
                                   ladder(&score1, &score2, &lcount1, &lcount2);
                                   for (int k = 0; k < 10; k++)
                                   {
                                          for (int l = 0; l < 10; l++)
                                          {
                                                 arr2[k][l] = ' ';
                                          }
                                   }

                                   int i = (score2 - 1) / 10;
                                   int j = (score2 - 1) % 10;
                                   arr2[i][j] = player22;
                                   playboard(arr1, arr2);
                                   printf("\t\t\t\t-------------------------------------------------------------------------------------------\n");
                                   printf("\t\t\t\t                                         DICE = %d                                             \n", num1);
                                   printf("\t\t\t\t-------------------------------------------------------------------------------------------\n");
                                   printf("\t\t\t\t                                 player %d gets %d on dice\n", turn, num1);
                                   snakesladder();
                                   printf("\t\t\t\t                       ************ player 1 score = %d ************\n\t\t\t\t                       ************ player 2 score = %d ************\n", score1, score2);
                                   turn = 1;
                                   if (score1 < 100 && score2 < 100)
                                   {
                                          printf("\t\t\t\tNow it's turn for player %d\n", turn);
                                   }
                            }
                     }
              }
       }

       if (turn == 1)
       {
              printf("\n\n\t\t\t\t\t\t**************  player 2 is a winner  *******************\n\n");
       }
       else
       {
              printf("\n\n\t\t\t\t\t\t**************  player 1 is a winner  *******************\n\n");
       }
       printf("\n\t\t\t\t\t\t********************** game stat ************************\n\n");
       printf("\t\t\t\t\t\t\t\tPlayer 1\t\tPlayer2\n");
       printf("\t\t\t\tNo of times dice trown    =       %d\t\t          %d\n", count1, count2);
       printf("\t\t\t\tNo of times snakes bites  =       %d\t\t          %d\n", scount1, scount2);
       printf("\t\t\t\tNo of times ladder climbs =       %d\t\t          %d\n\n", lcount1, lcount2);
}

int main()
{
       char arr1[10][10], arr2[10][10];
       int score1 = 0, score2 = 0, turn;
       srand(time(NULL));
       int num = (rand() % 10) + 0;
       int c, d; char cp;
       scanf("%c",&cp);
       if(cp==' ')
       printf("\n\n\t\t*************************** SNAKES AND LADDERS GAME *******************************\n\n");
       
       gamerules();
       instructions();
      
       
       printf("\n\n\t\t\t\tEnter a number between 0 to 9 by player 1 for tossing\n");
       scanf("%d", &c);
       if (c == num)
       {
              turn = 1;
              printf("\t\t\t\tPlayer 1 wins the toss\n");
       }
       else
       {
              turn = 2;
              printf("\t\t\t\tPlayer 2 wins the toss\n");
       }
       printf("\n\n\t\t\t\t\t\t     ****************** WELCOME ********************\n\n");
       for (int i = 0; i < 10; i++)
       {
              for (int j = 0; j < 10; j++)
              {
                     arr1[i][j] = ' ';
                     arr2[i][j] = ' ';
                     arr1[score1][score2] = player11;
                     arr2[score1][score2] = player22;
              }
       }
       printf("\t\t\t\t\t\t     ************** THIS IS PLAYBOARD **************\n\n");
       playboard(arr1, arr2);
       printf("\n\n\t\t\t\t\t\t     ************ LET'S START THE GAME *************\n\n");
       printf("\t\t\t\tIt's turn for player %d\n", turn);
       snakesladder();
       printf("\t\t\t\t                    *************** player 1 score = %d **************\n\t\t\t\t                    *************** player 2 score = %d **************\n", score1, score2);
       update(arr1, arr2, score1, score2, turn);
       printf("\t\t\t\tDo u want to play again then \n\t\t\t\tEnter 1 for Yes and 2 for No\n");
label:
       scanf("%d", &d);
       if (d == 1)
       {
              main();
       }
       else if (d == 2)
       {
              printf("\n\n\t\t\t\t\t\t************* THANK U for playing the game ************\n\n");
       }
       else
       {
              printf("\t\t\t\tYou entered invalid number \n\t\t\t\tPlease enter 1 for Yes and 2 for No\n");
              goto label;
       }

       return 0;
}