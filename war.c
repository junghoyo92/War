#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Function declaration */
int PrintCard(int card, int suit);
int DrawCard(int card, int suit);
int PrintResult(int card1, int card2, int suit1, int suit2);

/* 
 * Name : <Hoyoung Jung>
 * This program is the game of War where one card is drawn for each player and then the player with the higher card wins!
 */

int main()
{
		int suit;
		int card;
		int card1;
		int suit1;
		int card2;
		int suit2;
		
		/* 
		 . This seeds the random number 
		 . generator with the current time 
		 */
		srand(time(NULL));
		
		/* Create a random card and suit*/
		/* This will compute a random number from 0 to 3 */
		suit = rand() % 4;
		
		/* This will compute a random number from 1 to 13 */
		card = rand() % 13 + 1;
		
		card1 = randCS(13);
		card2 = randCS(13);
		suit1 = randCS(4);
		suit2 = randCS(4);
		
		printf("Player 1's Card: ");
		PrintCard(card1, suit1);
		printf("Player 2's Card: ");
		PrintCard(card2, suit2);
		PrintResult(card1, card2, suit1, suit2);
}

/*
- function that is called by the main function to set a random value and divides it by 4 or 13 depending on the users input to find the value of the suit and card respectively.
*/
int randCS(int div)
{
   int val;
   val = rand() % div;
   if(div==13)
      val+=1;
   return val;
}

/*
- Function that is called by the main function to print the card value and suit
*/
int PrintCard(int card, int suit)
{
	switch(card)
    {
    case 1:
        printf("2");
        break;
    case 2:
        printf("3");
        break;
    case 3:
        printf("4");
        break;
    case 4:
        printf("5");
        break;
    case 5:
        printf("6");
        break;
    case 6:
        printf("7");
        break;
    case 7:
        printf("8");
        break;      
    case 8:
        printf("9");
        break;       
    case 9:
        printf("10");
        break;       
    case 10:
        printf("Jack");
        break;        
    case 11:
        printf("Queen");
        break;       
    case 12:
        printf("King");
        break;       
    case 13:
        printf("Ace");
        break;
        
    default:
        printf("%d", card);
        break;
    }
    
    printf(" of ");
    
    switch(suit)
    {
    case 0:
        printf("Clubs");
        break;
        
    case 1:
        printf("Spades");
        break;
        
    case 2:
        printf("Diamonds");
        break;
        
    case 3:
        printf("Hearts");
        break;
    }
    printf("\n");
}

/*
- Function that is called by the main function to determine the winner of the game.
*/
int PrintResult(int card1, int card2, int suit1, int suit2)
{
	if(card1>card2)
	{
		printf("Player 1 wins\n");
	}
	else if(card2>card1)
	{
		printf("Player 2 wins\n");
	}
	else
	{
		if(suit1>suit2)
		{
			printf("Player 1 wins\n");
		}
		else if(suit2>suit1)
		{
			printf("Player 2 wins\n");
		}
		else
		{
			printf("Which one cheated? One will never know...\n We will just call it a tie!\n");
		}
	}
}

